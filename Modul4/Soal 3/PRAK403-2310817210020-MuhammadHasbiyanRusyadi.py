a1, a2 =map(int, input().split())
i = a1
j = a2
if a1 > a2:
    for i in range(i, j, -1):
        print(f"{i} {j} -", end=" ")
        j += 1
else:
    for i in range(i, j):
        print(f"{i} {j} -", end=" ")
        j -= 1
print(a1,a2)        
        