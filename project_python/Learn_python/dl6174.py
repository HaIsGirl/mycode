def sapxep(A):
    A.sort()
    x=''
    for i in range(len(A)):
     x+=A[i]
    return x
def daonguoc(A):
   y=''
   A.sort()
   A.reverse()
   for i in range(len(A)):
      y+=A[i]
   return y 
n=input('Nhap so n= ')
A=[]
x=''
y=''    
b=0
c=0
j=1
while n!='6174':
    for i in range(len(n)):
        A.append(n[i])
    x=sapxep(A)
    y=daonguoc(A)
    b=int(x)
    c=int(y)
    n=str(c-b)
    A=[]
    j+=1
    print(n)
print(j)