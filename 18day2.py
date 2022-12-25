a=input("enter the string")
print(a)
p=[]
for j in range(0,len(a)):
    p.append(a[j])
o=len(a)
for i in range(0,o):
    for k in range(i,o):
        print(p[k],end="")
    print('\n')
