import matplotlib
# FORCE A POPUP WINDOW: This line forces Windows to open a physical window
matplotlib.use('TkAgg') 

import numpy as np
import matplotlib.pyplot as plt
from matplotlib.widgets import Slider
from matplotlib.patches import Rectangle

# ==========================================
# DEFINE YOUR FUNCTION AND LIMIT POINT HERE
# ==========================================
def f(x): 
    return x**2  # You can change this to 3*x - 1, x**3, etc.

a = 2  # The x-value you approach
L = 4  # The limit value (since 2^2 = 4)
# ==========================================

# Simple math fallback to calculate delta for a curve without needing extra packages
def get_curve_delta(epsilon):
    # For f(x) = x^2 approaching 2, the exact bounds are sqrt(L-e) and sqrt(L+e)
    # We find the distance to both sides and take the smaller one
    try:
        left_bound = np.sqrt(max(0.001, L - epsilon))
        right_bound = np.sqrt(L + epsilon)
        return min(abs(a - left_bound), abs(right_bound - a))
    except:
        return epsilon / 4.0

initial_epsilon = 0.5
initial_delta = get_curve_delta(initial_epsilon)

# Build the layout
fig, ax = plt.subplots(figsize=(9, 6))
plt.subplots_adjust(bottom=0.25)

x_vals = np.linspace(a - 2, a + 2, 1000)
ax.plot(x_vals, f(x_vals), label="f(x) = x²", color="blue", lw=2)
ax.plot(a, L, 'ro', markersize=8, label=f"Limit point ({a}, {L})")

# Layout boundaries
h_line1 = ax.axhline(L + initial_epsilon, color='g', linestyle='--')
h_line2 = ax.axhline(L - initial_epsilon, color='g', linestyle='--')
v_line1 = ax.axvline(a + initial_delta, color='purple', linestyle='--')
v_line2 = ax.axvline(a - initial_delta, color='purple', linestyle='--')

rect = Rectangle((a - initial_delta, L - initial_epsilon), 
                 2 * initial_delta, 2 * initial_epsilon, 
                 facecolor='yellow', alpha=0.2, label="Valid Box")
ax.add_patch(rect)

ax.set_xlim(a - 1.5, a + 1.5)
ax.set_ylim(max(0, L - 2), L + 2)
ax.set_xlabel("x")
ax.set_ylabel("f(x)")
ax.legend(loc="upper left")
ax.grid(True)
ax.set_title(f"Curve Visualizer (ε = {initial_epsilon:.2f}, δ = {initial_delta:.3f})")

# Slider initialization
ax_slider = plt.axes([0.2, 0.1, 0.6, 0.03])
epsilon_slider = Slider(ax_slider, 'Epsilon (ε)', 0.05, 1.5, valinit=initial_epsilon, valstep=0.05)

def update(val):
    epsilon = epsilon_slider.val
    delta = get_curve_delta(epsilon)
    
    h_line1.set_ydata([L + epsilon, L + epsilon])
    h_line2.set_ydata([L - epsilon, L - epsilon])
    v_line1.set_xdata([a + delta, a + delta])
    v_line2.set_xdata([a - delta, a - delta])
    
    rect.set_xy((a - delta, L - epsilon))
    rect.set_width(2 * delta)
    rect.set_height(2 * epsilon)
    
    ax.set_title(f"Curve Visualizer (ε = {epsilon:.2f}, δ = {delta:.3f})")
    fig.canvas.draw_idle()

epsilon_slider.on_changed(update)
plt.show()
