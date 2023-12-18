baris1, baris2 = map(int, input("Masukkan Total bilangan baris pertama dan baris kedua: ").split())
if baris1 != baris2:
    print("Jumlah tidak sama")
else:
    arr1 = [int(x) for x in input(f"Masukkan angka baris pertama: ").split()]
    arr2 = [int(x) for x in input(f"Masukkan angka baris kedua: ").split()]
    print("Hasil:")
    for a in range(min(baris1, baris2)):
        hasil = arr1[a] * arr2[a]
        print(hasil, end=" ")
