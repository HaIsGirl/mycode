n=int(input())
k=int(input())
A=[0]*100000

tam=input()
A=tam.split()
for i in range(n):
    A[i]=int(A[i])
i=0
s=[0]*1000000
j=0
d=0
while n-i>=k:
    t=i
    for j in range(k):
        s[d]+=A[t]
        t+=1
    d+=1
    i+=1
print(max(s))
        
        



