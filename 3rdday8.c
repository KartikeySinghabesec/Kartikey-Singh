#include<stdio.h>

int main()
{

    int n,sum,c,d;
    printf("enter the numbers:");
    scanf("%d",&n);
    
    
    int sum (int n);
    {
        sum =0 ;
        while(n>0||sum>9)
        {
            if(n==0)
            {
                n=sum;
                sum =0;

            }
            sum = sum+n%10;
        }
        printf("%d",sum);
    }
   

}