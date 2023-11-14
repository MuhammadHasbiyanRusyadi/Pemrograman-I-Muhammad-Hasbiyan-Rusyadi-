a, z =map(int, input().split())
total = 0
for i in range(1, a + 1):
    tot = 0
    for j in range(i, 0, -1):
        print(f"({j} * {z})", end="")
        tot += j * z
        if j > 1:
            print(" + ", end="")
    total += tot
    print(f" = {tot}")
print(total)
