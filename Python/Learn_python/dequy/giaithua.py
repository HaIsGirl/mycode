def gt(n):
  if n==1:
    return 1
  return n*gt(n-1)
n=int(input())
print(gt(n))