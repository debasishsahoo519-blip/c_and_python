import numpy as np
import matplotlib.pyplot as plt
from matplotlib.widgets import Slider
from matplotlib.patches import Rectangle

def f(x): 
    return 3 * x - 1

a, L = 2, 5
initial_epsilon = 0.5
initial_delta = initial_epsilon / 3

fig, ax = plt.subplots(figsize=(10, 7))
plt.subplots_adjust(bottom=0.25)

x_vals = np.linspace(a - 2, a + 2, 1000)
ax.plot(x_vals, f(x_vals), label="f(x) = 3x - 1", color="blue", lw=2)
ax.plot(a, L, 'ro', markersize=8, label=f"Limit point ({a}, {L})")

# Set up guidelines
h_line1 = ax.axhline(L + initial_epsilon, color='g', linestyle='--')
h_line2 = ax.axhline(L - initial_epsilon, color='g', linestyle='--')
v_line1 = ax.axvline(a + initial_delta, color='purple', linestyle='--')
v_line2 = ax.axvline(a - initial_delta, color='purple', linestyle='--')

# HIGH-PERFORMANCE FIX: Create a lightweight rectangle patch instead of fill_between
rect = Rectangle((a - initial_delta, L - initial_epsilon), 
                 2 * initial_delta, 2 * initial_epsilon, 
                 facecolor='yellow', alpha=0.2, label="Valid Box")
ax.add_patch(rect)

ax.set_xlim(a - 1, a + 1)
ax.set_ylim(L - 2, L + 2)
ax.set_xlabel("x")
ax.set_ylabel("f(x)")
ax.legend(loc="upper left")
ax.grid(True)
ax.set_title(f"Drag Slider Below! (ε = {initial_epsilon:.2f}, δ = {initial_delta:.3f})")

ax_slider = plt.axes([0.2, 0.1, 0.6, 0.03])
# drag=False makes it only update when you release the mouse, or we keep drag=True since Rectangle is fast
epsilon_slider = Slider(ax_slider, 'Epsilon (ε)', 0.05, 1.5, valinit=initial_epsilon, valstep=0.05)

def update(val):
    epsilon = epsilon_slider.val
    delta = epsilon / 3
    
    # Update lines rapidly
    h_line1.set_ydata([L + epsilon, L + epsilon])
    h_line2.set_ydata([L - epsilon, L - epsilon])
    v_line1.set_xdata([a + delta, a + delta])
    v_line2.set_xdata([a - delta, a - delta])
    
    # Smoothly modify the shape's boundaries in memory (Zero Lag)
    rect.set_xy((a - delta, L - epsilon))
    rect.set_width(2 * delta)
    rect.set_height(2 * epsilon)
    
    ax.set_title(f"Drag Slider Below! (ε = {epsilon:.2f}, δ = {delta:.3f})")
    fig.canvas.draw_idle()

epsilon_slider.on_changed(update)
plt.show()
