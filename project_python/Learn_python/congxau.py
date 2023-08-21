n=str(input())
A=[]
t=0
max=0
for i in range(len(n)):
	A.append(int(n[i]))
	if max<A[i]: max=A[i]
print(len(n))
print("So lon nhat la ",max)
