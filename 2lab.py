import random
import math
'''
def rnd(min_val, max_val):
    return random.uniform(min_val, max_val)

a = rnd(1, 10)
b = rnd(1, 10)
x = rnd(-10, 10)
y = rnd(-10, 10)

if x**2/a**2 - y**2/b**2 == 1:
    print("Точка принадлежит гиперболе.")
else:
    print("Точка не принадлежит гиперболе.")

c = math.sqrt(a**2 + b**2)
print("Координаты фокусов: ", (-c, 0), (c, 0))

print("Действительная полуось: ", abs(a))
print("Мнимая полуось: ", abs(b))

ecc = c / a
print("Эксцентриситет: ", ecc)

dist_directrix = 2 * abs(a) * math.sqrt(ecc**2 - 1)
print("Расстояние между директрисами: ", dist_directrix)
'''

import random

def random_float(min_val, max_val):
    return random.uniform(min_val, max_val)

def on_cone(x, y, z, a, b, c, d, e, f, g, h):
    return a * x**2 + b * y**2 + c * z**2 + 2 * d * x * y + 2 * e * x * z + 2 * f * y * z + 2 * g * x + 2 * h * y <= 0

def plane_intersect_cone(a_p, b_p, c_p, d_p, a_c, b_c, c_c, d_c, e_c, f_c, g_c, h_c):
    return a_p * a_c + b_p * b_c + c_p * c_c + d_p * d_c + e_p * e_c + f_p * f_c + g_p * g_c + h_p * h_c <= 0

def line_intersect_cone(x1, y1, z1, x2, y2, z2, a_c, b_c, c_c, d_c, e_c, f_c, g_c, h_c):
    x_d = x2 - x1
    y_d = y2 - y1
    z_d = z2 - z1
    return a_c * x_d**2 + b_c * y_d**2 + c_c * z_d**2 + 2 * (d_c * x_d * y_d + e_c * x_d * z_d + f_c * y_d * z_d) + 2 * (g_c * x_d + h_c * y_d) <= 0

a_c = random_float(-10, 10)
b_c = random_float(-10, 10)
c_c = random_float(-10, 10)
d_c = random_float(-10, 10)
e_c = random_float(-10, 10)
f_c = random_float(-10, 10)
g_c = random_float(-10, 10)
h_c = random_float(-10, 10)

a_p = random_float(-10, 10)
b_p = random_float(-10, 10)
c_p = random_float(-10, 10)
d_p = random_float(-10, 10)

x1_l = random_float(-10, 10)
y1_l = random_float(-10, 10)
z1_l = random_float(-10, 10)
x2_l = random_float(-10, 10)
y2_l = random_float(-10, 10)
z2_l = random_float(-10, 10)

x_p = random_float(-10, 10)
y_p = random_float(-10, 10)
z_p = random_float(-10, 10)

if on_cone(x_p, y_p, z_p, a_c, b_c, c_c, d_c, e_c, f_c, g_c, h_c):
    print("Точка принадлежит конусу.")
else:
    print("Точка не принадлежит конусу.")

if plane_intersect_cone(a_p, b_p, c_p, d_p, a_c, b_c, c_c, d_c, e_c, f_c, g_c, h_c):
    print("Плоскость пересекает конус.")
else:
    print("Плоскость не пересекает конус.")

if line_intersect_cone(x1_l, y1_l, z1_l, x2_l, y2_l, z2_l, a_c, b_c, c_c, d_c, e_c, f_c, g_c, h_c):
    print("Прямая пересекает конус.")
else:
    print("Прямая не пересекает конус.")