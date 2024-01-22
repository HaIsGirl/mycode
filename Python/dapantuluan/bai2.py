a = float(input("Nhap canh thu nhat: "))
b = float(input("Nhap canh thu hai: "))
c = float(input("Nhap canh thu ba: "))

if a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2:
    print("Do la tam giac vuong")
else:
    print("Do khong phai tam giac vuong")

