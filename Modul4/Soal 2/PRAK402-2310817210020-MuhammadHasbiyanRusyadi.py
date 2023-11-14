n = int(input())
if n % 2 == 0:
    for angka in range(1, n+1, 2):
        print(angka, end=" ")
    print()
    for angka in range(n, 1, -2):
        print(angka, end=' ')
else:
    for angka in range(1, n+1, 2):
        print(angka, end=" ")
    print()  # Baris baru
    for angka in range(n-1, 1, -2):
        print(angka, end=" ")