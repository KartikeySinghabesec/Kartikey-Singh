n=int(input("enter the number"))
final=0
o=n-2
for i in range(o,-1,-1):
    final=final+(o*(o+1)*(o+2))
print(final)