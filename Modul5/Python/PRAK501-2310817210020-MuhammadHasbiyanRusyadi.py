def maxbilangan(a, b, c, d):
    Maks = a
    if b > Maks:
        Maks = b
    if c > Maks:
        Maks = c
    if d > Maks:
        Maks = d
    return Maks
def main():
    a, b, c, d = map(int, input().split())
    hasil_max = maxbilangan(a, b, c, d)
    print(hasil_max)
if __name__ == "__main__":
    main()