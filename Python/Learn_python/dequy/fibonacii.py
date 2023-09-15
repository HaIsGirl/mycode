def fibonacii(n):
    if (n==1) or (n==2):
        return 1
    return fibonacii(n-1) + fibonacii(n-2)

n=int(input())
print(fibonacii(n))