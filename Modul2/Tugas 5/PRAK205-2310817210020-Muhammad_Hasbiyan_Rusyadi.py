import math
a = input("")
b = input("")
c = round(math.sqrt(int(b)*int(b) - int(a)*int(a)))
k = round(int(a)+int(b)+int(c))
L = round(int(a)*int(c)/ 2)
print(f"Alas = {c} cm")
print(f"keliling = {k} cm")
print(f"luas = {L} cm^2")