def max(a,b) :
    if (a > b) :
        return a
    else :
        return b
def min(a,b) :
    if (a < b) :
        return a
    else :
        return b
batas = 0
maks = -100000
minim = 100000
angka = int(input())
nilai = list(map(int, input().split()))
while (batas < angka) :
    maks = max(maks,nilai[batas])
    minim = min(minim,nilai[batas])
    batas += 1  
print(f"{maks} {minim}")