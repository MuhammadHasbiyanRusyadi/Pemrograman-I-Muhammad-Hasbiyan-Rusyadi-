detik =int(input(""))
jam = detik // 3600
ssdtk = detik % 3600
menit = ssdtk // 60
d = ssdtk % 60
hari = jam // 24
j = jam % 24
if hari > 0:
    print(f"{hari} hari {j:02d}:{menit:02d}:{d:02d}")
else:
    print(f"{j:02d}:{menit:02d}:{d:02d}")