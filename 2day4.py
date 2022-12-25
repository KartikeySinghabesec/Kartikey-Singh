p=[]
count=0
for i in range(5):
    a=int(input("enter the number"))
    p.append(a)
for j in range(5):
    count=count+p[j]
print("the mean is %d"%(count/5))
print("the median is %d"%(p[2]))