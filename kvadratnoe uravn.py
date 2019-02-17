import math
a=int(input("Введите a: "))
b=int(input("Введите b: "))
c=int(input("Введите c: "))
d=(b*b)-4*a*c
if d<0:
    print("Нет корненй")
elif d==0:
    print(-b/(2*a))
else:
    print((-b+pow(d,1/2))/(2*a))
    print((-b-pow(d,1/2))/(2*a))
    

