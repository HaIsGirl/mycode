n=int(input('Nhap so n= '))
m=int(input('Nhap so m= '))
k=int(input('Nhap so k= '))
s=input()
A=s.split()
if len(A)<n:
    print('Error Value!!')
    exit()
for i in range(len(A)):
    A[i]=int(A[i]) 
A.sort()
print(A)
A.append(int(m))
n+=1
A.sort()
print(A)
i=0
while i < len(A):
    while k == A[i]:
        del A[i]
    i+=1
print(A)
