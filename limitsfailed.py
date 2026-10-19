import matplotlib
matplotlib.use('TkAgg')  # Force a stable interactive popup window

import numpy as np
import matplotlib.pyplot as plt
from matplotlib.widgets import Slider, TextBox
from matplotlib.patches import Rectangle

# ==========================================
# INITIAL DEFAULTS (Changeable inside the app)
# ==========================================
initial_expr = "x**2"
initial_a = 2.0
initial_L = 4.0
initial_epsilon = 0.5

# Safe evaluation environment for math expressions
allowed_words = {
    'x': 0, 'np': np, 'sin': np.sin, 'cos': np.cos, 'tan': np.tan,
    'exp': np.exp, 'log': np.log, 'sqrt': np.sqrt, 'pi': np.pi, 'abs': np.abs
}

def parse_function(expr_str, x_vals):
    """Safely computes y values for any typed mathematical string expression."""
    try:
        context = allowed_words.copy()
        context['x'] = x_vals
        return eval(expr_str, {"__builtins__": None}, context)
    except Exception:
        return np.zeros_like(x_vals)

def calculate_delta(expr_str, a_val, L_val, epsilon_val):
    """Scans the local neighborhood to find a delta that satisfies the epsilon condition."""
    test_range = np.linspace(a_val - 2.0, a_val + 2.0, 2000)
    y_vals = parse_function(expr_str, test_range)
    
    inside_epsilon = (y_vals > L_val - epsilon_val) & (y_vals < L_val + epsilon_val)
    
    left_side = test_range[test_range < a_val]
    left_inside = inside_epsilon[test_range < a_val]
    right_side = test_range[test_range > a_val]
    right_inside = inside_epsilon[test_range > a_val]
    
    # FIX: Use np.min and handle edge cases where the function never exits the box
    delta_l = a_val - left_side[~left_inside][-1] if np.any(~left_inside) else 1.5
    delta_r = right_side[~right_inside] - a_val if np.any(~right_inside) else 1.5
    
    # Use float() to ensure we extract pure numbers, avoiding NumPy array comparison errors
    return float(max(0.001, min(float(np.min(delta_l)), float(np.min(delta_r)), 1.5)))

# --- Build Layout Canvas ---
fig, ax = plt.subplots(figsize=(10, 7.5))
plt.subplots_adjust(bottom=0.35, left=0.15)

x_plot = np.linspace(initial_a - 3, initial_a + 3, 1000)
y_plot = parse_function(initial_expr, x_plot)
current_delta = calculate_delta(initial_expr, initial_a, initial_L, initial_epsilon)

line, = ax.plot(x_plot, y_plot, color="blue", lw=2, label="f(x)")
limit_point, = ax.plot(initial_a, initial_L, 'ro', markersize=8, label="Test Point")

h_line1 = ax.axhline(initial_L + initial_epsilon, color='g', linestyle='--')
h_line2 = ax.axhline(initial_L - initial_epsilon, color='g', linestyle='--')
v_line1 = ax.axvline(initial_a + current_delta, color='purple', linestyle='--')
v_line2 = ax.axvline(initial_a - current_delta, color='purple', linestyle='--')

rect = Rectangle((initial_a - current_delta, initial_L - initial_epsilon), 
                 2 * current_delta, 2 * initial_epsilon, 
                 facecolor='yellow', alpha=0.15, label="Valid Box")
ax.add_patch(rect)

ax.set_xlim(initial_a - 2, initial_a + 2)
ax.set_ylim(initial_L - 3, initial_L + 3)
ax.grid(True)
ax.legend(loc="upper left")
ax.set_title(f"ε = {initial_epsilon:.2f}, Auto-Calculated δ = {current_delta:.3f}")

# --- Construct User Input UI Panel ---
ax_expr = plt.axes([0.15, 0.22, 0.4, 0.04])
# Explicitly use different unique axes variables to avoid UI overlapping bugs
ax_box_a = plt.axes([0.65, 0.22, 0.2, 0.04])
ax_box_L = plt.axes([0.65, 0.14, 0.2, 0.04])
ax_sl    = plt.axes([0.15, 0.06, 0.7, 0.04])

txt_expr  = TextBox(ax_expr, 'Function f(x): ', initial=initial_expr)
txt_a     = TextBox(ax_box_a, 'Approach a: ', initial=str(initial_a))
txt_L     = TextBox(ax_box_L, 'Limit L: ', initial=str(initial_L))
sl_eps    = Slider(ax_sl, 'Epsilon (ε)', 0.02, 2.0, valinit=initial_epsilon, valstep=0.02)

def refresh_display(*args):
    expr_str = txt_expr.text
    try:
        a_val = float(txt_a.text)
        L_val = float(txt_L.text)
    except ValueError:
        return
        
    epsilon_val = sl_eps.val
    delta_val = calculate_delta(expr_str, a_val, L_val, epsilon_val)
    
    x_new = np.linspace(a_val - 4, a_val + 4, 1000)
    line.set_xdata(x_new)
    line.set_ydata(parse_function(expr_str, x_new))
    limit_point.set_data([a_val], [L_val])
    
    h_line1.set_ydata([L_val + epsilon_val, L_val + epsilon_val])
    h_line2.set_ydata([L_val - epsilon_val, L_val - epsilon_val])
    v_line1.set_xdata([a_val + delta_val, a_val + delta_val])
    v_line2.set_xdata([a_val - delta_val, a_val - delta_val])
    
    rect.set_xy((a_val - delta_val, L_val - epsilon_val))
    rect.set_width(2 * delta_val)
    rect.set_height(2 * epsilon_val)
    
    ax.set_xlim(a_val - 2, a_val + 2)
    ax.set_ylim(L_val - 3, L_val + 3)
    ax.set_title(f"ε = {epsilon_val:.2f}, Auto-Calculated δ = {delta_val:.3f}")
    fig.canvas.draw_idle()

txt_expr.on_submit(refresh_display)
txt_a.on_submit(refresh_display)
txt_L.on_submit(refresh_display)
sl_eps.on_changed(refresh_display)

plt.show()
