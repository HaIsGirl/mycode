f=open("project python/Learn_python/chuanhoa.inp",'r')
g=open("project python/Learn_python/chuanhoa.out",'w')
n=f.readline()
g.write(n)
a=''
s=''
for i in range(int(n)):
    a=f.readline()
    a=a.split()
    for j in range(len(a)):
        a[j]=a[j].lower()   
    print(a)
    for j in range(len(a)):
        a[j]=a[j].capitalize()
        s=s+a[j]+' '
    g.writelines(s+'\n')
    s=''
f.close()
g.close()