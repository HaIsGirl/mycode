def  sont(n):
	kt=True
	for i in range(2, n+1//2):
		if (n%i==0):
			kt=False
			break
	if n<=1: kt=False
	if kt==True: return True
	else: return False

A=[]
n=int(input("Nhap N= "))
i=1
for i in range(1,n+1):
	if (n%i==0):
		A.append(i)
print(A)
dem=0
for i in range(len(A)):
	if (sont(A[i])==True): dem+=1
print("Co ",dem," uoc la so nguyen to")
