def uc(n,m):
    while n!=m:
        if n>m:
            n=n-m
        else:
            m=m-n
    return n

n=int(input())
m=int(input())
k=int(input())
count=0
ucln=int(uc(n,m))
for i in range(1,ucln+1):
    if ucln%i==0:
       count+=1
       if count==k: print(i)
if count<k: print(-1)
