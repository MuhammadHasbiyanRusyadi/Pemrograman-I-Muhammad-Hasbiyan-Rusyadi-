angka, simbol = input().split(" ")
for a in range(1, 51):
    if int(a) % int(angka) == 0:
        print(simbol, end=" ")
        continue
    else:
        print(a, end=" ")