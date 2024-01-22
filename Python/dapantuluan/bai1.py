#Bài 1: Hãy lập trình nhập từ bàn phím một số nguyên bất kì, 
#sau đó thông báo lên màn hình kết quả kiểm tra xem số đó có chia hết cho 5 hay không.
n = int(input())
if n % 5 == 0:
    print(n,"chia het cho 5")
else:
    print(n,"khong chia het cho 5")

