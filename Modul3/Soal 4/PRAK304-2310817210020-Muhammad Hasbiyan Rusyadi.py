a = int(input(""))
if a <= 0 :
    print("nol")
elif  a > 1 and a < 10 and a != 0  :
    print("satuan")
elif a >= 11 and a < 20 :
    print("belasan")
elif a >= 20  and a < 100 :
    print("puluhan")
elif a >= 100 :
    print("Anda Menginput Melebihi Limit Bilangan")