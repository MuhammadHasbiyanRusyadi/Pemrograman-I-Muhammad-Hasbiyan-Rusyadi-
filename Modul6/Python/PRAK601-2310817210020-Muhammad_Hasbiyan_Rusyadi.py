a, b = map(int,input().split())
arr = []
for _ in range(a):
    row = list(map(int,input().split()))
    arr.extend(row)
for y in range(a):
    for z in range(b):
        print(arr[y * b + z], end=" ")
    print()