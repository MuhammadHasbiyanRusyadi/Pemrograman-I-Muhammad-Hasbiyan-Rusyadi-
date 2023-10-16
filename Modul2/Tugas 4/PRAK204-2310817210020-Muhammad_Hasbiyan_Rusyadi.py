phi = 3.142857
r = input("")
t = input("")
V = phi * int(r)**2 * int(t)
L = 2 * phi * int(r)**2 + 2 * phi * int(r) * int(t)
k = phi * 2 * int(r)

print("Volume = %.2f" %V)
print("Luas = %.2f" %L)
print("Keliling = %.2f" %k)