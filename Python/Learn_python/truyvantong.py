def truyvantong(x,y,A):
    sum = 0 
    for i in range(x,y):
        sum += A[i-1]
        
    return sum

n = int(input())

A = []

for i in range(n):
    A.append(int(input()))

x = int(input())

y = int(input())

print(truyvantong(x,y,A))





