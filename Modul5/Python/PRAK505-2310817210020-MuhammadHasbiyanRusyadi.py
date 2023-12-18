def Biodata(thnlhr,Nama,Asal) :
    thnskrg = 2023
    Umur = thnskrg - thnlhr
    print(f"\nPerkenalkan Nama Saya : {Nama}")
    print(f"Umur saya : {Umur}")
    print(f"Saya Adalah Angkatan : {thnskrg}")
    print(f"Asal Saya dari : {Asal}\n")
thnlhr = int(input("\nTahun lahir : "))
Nama = input("Namaku : ")
Asal = input("Asal : ")
Biodata(thnlhr, Nama, Asal)
