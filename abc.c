#include <stdio.h>
int main()
{
    int i, j;
    //this logic is made by hit and trial method which is not good 
        for (i=0;i<=5; i++)
        {
            for (j=0;j<=i;j++)
            {
                printf("%c",i+j+65);
            }
            printf("\n");
        }
    
}