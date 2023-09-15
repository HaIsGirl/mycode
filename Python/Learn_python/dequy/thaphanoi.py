def thaphanoi(n,a,b,c):
    if n==1:
        print('Chuyen dia ',n,' tu cot ',a,' sang cot ',c)
    if n>=2:
        thaphanoi(n-1,a,c,b)
        thaphanoi(1,a,b,c)
        thaphanoi(n-1,b,a,c)
    
n=int(input())
a='A'
b='B'
c='C'
thaphanoi(n,a,b,c)