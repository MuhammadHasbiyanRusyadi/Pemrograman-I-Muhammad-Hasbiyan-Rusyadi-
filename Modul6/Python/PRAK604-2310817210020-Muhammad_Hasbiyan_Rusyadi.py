baris1 = input("Masukkan kalimat baris pertama: ")
baris2 = input("Masukkan kalimat baris kedua: ")
print()
sizebaris1 = len(baris1)
sizebaris2 = len(baris2)
if sizebaris1 == sizebaris2:
    i = 0
    j = 0
    ttlasterisk = 0
    ttlhashtag = 0
    while i < sizebaris1 and j < sizebaris2:
        if baris1[i] == ' ' and baris2[j] == ' ':
            i += 1
            j += 1
            continue
        if baris1[i] == baris2[j]:
            print("*", end="")
            ttlasterisk += 1
        else:
            print("#", end="")
            ttlhashtag += 1
        i += 1
        j += 1
    print("\n* =", ttlasterisk)
    print("# =", ttlhashtag)
    if ttlasterisk >= ttlhashtag:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
else:
    print("Panjang kalimat berbeda, pesan palsu")
