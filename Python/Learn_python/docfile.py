f=open('D:/file.inp','r')
g=open('D:/file.out','w')
n=f.readline()
g.write(n)
data=list(f.read().split())
n=int(n)
sum=0
for i in range(n):
	sum=sum+int(data[i])
g.write(str(data))
