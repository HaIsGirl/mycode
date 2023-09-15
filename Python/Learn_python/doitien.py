f=open('D:/doitien.inp',mode='r')
g=open('D:/doitien.out',mode='w')
q=f.readline()
q=q.split()
n=int(q[0])  
m=int(q[1])
s=f.readline()
A = s.split()
tam=0
vitri=[0]* len(A)
for i in range(len(A)):
    A[i]=int(A[i])
for i in range(len(A)):
    for j in range(i+1):
        if A[i]>A[j]:
            tam=A[i]
            A[i]=A[j]
            A[j]=tam
for i in range(len(A)):
    while A[i]<=n:
        n=n-A[i]
        vitri[i]+=1
for i in range(len(A)):
    g.write(str(A[i])+':'+str(vitri[i])+"\n")
f.close()
g.close()