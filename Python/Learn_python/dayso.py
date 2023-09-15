n=int(input())
m=int(input())
k=int(input())
s=input()
A=s.split()
i=0
while i<len(A):
    if A[i]==' ': del(A[i])
    else: i+=1
if len(A)!=n: 
    print("Value Error")
    exit()
A.sort()
print(A)
A.append(str(m))
n+=1
A.sort()
print(A)
i=0
while i<n:
    while int(A[i])==k:
        del(A[i])
        n-=1
    i+=1
print(A)