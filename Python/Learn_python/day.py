import math
x,y,z = map(float,input().split())

p = (x + y + z) / 2 

dtich = math.sqrt(p*(p-x) * (p-y) * (p-z))

print(dtich)


