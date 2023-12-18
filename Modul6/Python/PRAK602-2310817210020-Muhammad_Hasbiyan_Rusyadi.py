def zetsu(ruangan, jumlahzetsu, total):
    for i in range(ruangan):
        total[i] = jumlahzetsu[i] * (i + 1)
def main():
    ruangan = int(input())
    jumlahzetsu = list(map(int, input().split()))
    total = [0] * ruangan
    zetsu(ruangan, jumlahzetsu, total)
    for i in range(ruangan):
        print(total[i], end=" ")
if __name__ == "__main__":
    main()
