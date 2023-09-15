n=int(input())
A=[]
for i in range(n):
	 A.append(int(input()))
print(A)
for i in range(n):
	for j in range(i+1,n):
		if A[i] > A[j]:
			tam=A[i]
			A[i]=A[j]
			A[j]=tam
print(A)