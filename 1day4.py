final=0
def palindrome(n):
    global r
    global final
    if (n==0):
        if (r==final):
            print("palindrome")
        else:
            print("NOT PALINDROME")
    else:
        u=n%10
        final=(final)*10+u
        n=n//10
        palindrome(n)
i=int(input("enter the number"))
r=i
palindrome(i)
