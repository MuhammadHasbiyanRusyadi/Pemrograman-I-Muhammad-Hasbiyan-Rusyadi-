def reverse(angka) :
    rvrsd = 0
    while(angka != 0) :
        rvrsd = rvrsd * 10 + (angka % 10)
        angka //= 10
    return rvrsd
A,B = map(int,input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))



