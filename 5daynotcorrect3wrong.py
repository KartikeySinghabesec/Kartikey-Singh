n=int(input("enter the number of terms"))
x=int(input("enter the number"))
m=0
sumation=1
final=0
for i in range(n,0,-1):
    if i%2==0:
        continue
    else:
        for j in range(i,0,-1):
            if j%2==0:
                m=-1
            else:
                m=1
                sumation=sumation*j
            print(j)
        final=final+(x**i/sumation)*m
        sumation=1