n=int(input("enter the number"))
q=n
print("*"*n)
for i in range(0,n-1):
    print(" "*(n-2),end="")
    print("*",end="")
    n=n-1
    print("\n")
print("*"*q)
