while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    P = int(input("Masukkan Pilihan: "))
    if 1 <= P <= 4:
        n1 = float(input("Masukkan nilai pertama: "))
        n2 = float(input("Masukkan nilai kedua: "))
        if P == 1:
            print(f"Hasil Penjumlahan antara {n1:.2f} dengan {n2:.2f} adalah {n1 + n2:.2f}")
        elif P == 2:
            print(f"Hasil Pengurangan antara {n1:.2f} dengan {n2:.2f} adalah {n1 - n2:.2f}")
        elif P == 3:
            print(f"Hasil Perkalian antara {n1:.2f} dengan {n2:.2f} adalah {n1 * n2:.2f}")
        elif P == 4:
            if n2 != 0:
                print(f"Hasil Pembagian antara {n1:.2f} dengan {n2:.2f} adalah {n1 / n2:.2f}")
            else:
                print("Error: Pembagian dengan nol tidak diizinkan.")
    elif P == 5:
        print("Terimakasih, telah menggunakan kalkulator Muhammad Hasbiyan Rusyadi")
        break
    else:
        print("Input anda salah, silahkan coba lagi")