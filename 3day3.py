n=int(input("enter the number of terms"))
x=int(input("enter the number"))
sumation=1
final=0
for i in range(n,0,-1):
    for j in range(i,0,-1):
        sumation=sumation*j
    final=final+(x**i/sumation)
    sumation=1
print(final+1)