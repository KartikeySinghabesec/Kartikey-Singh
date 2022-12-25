n=int(input("enter the number"))
a=[]
for k in range(0,n):    
    for i in range(1,n+1):
        a.append(i)
    for j in range(n-1,0,-1):
        a.append(j)
    print("\n")
    n=n-1
a.reverse()
print(a)