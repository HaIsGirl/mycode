f=open('test.inp','r')
g=open('test.out','w')
n=int(f.readline())
print(n)
s=[None]*n
for i in range(n):
    s[i]=f.readline()
    s[i]=s[i].lower()
    s[i]=s[i].split()
    for j in range(len(s[i])): 
        s[i][j]=s[i][j].capitalize()
for i in range(n):
    g.writelines('\n')
    for j in range(len(s[i])):
        g.write(s[i][j]+' ')
        
