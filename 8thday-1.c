/*
#include<stdio.h>  
#include<conio.h>  
#include<stdlib.h>  
#include<math.h>  
  

void R_Quadratic( int x, int y, int z)  
{  
    if (x == 0) 
    {  
        printf(" The value of x cannot be zero");  
        return;  
    }  
    int det = y * y - 4 * x * z;  
    double sqrt_det = sqrt(abs (det));  
    if (det > 0)  
    {  
    printf("\n Both roots are real and different \n ");  
    printf("%.2f\n %.2f", (double) (-y + sqrt_det) / (2 * x), (double) (-y - sqrt_det) / (2 * x));  
        }  
else if (det == 0)  
{  
    printf("\n Both roots are real and same ");  
    printf("%.2f", -(double)y / (2 * x));  
}  
else  
{  
    printf("\n Both roots are complex");  
    printf("\n %.2f + %.2fi \n%.2f - %.2fi", -(double)y / (2 * x), sqrt_det, -(double)y / (2 * x), sqrt_det);  
      
}  
}  
void main()  
{  
    int x, y, z; 
    printf("\n Enter the value of coefficient x, y and z: ");  
    scanf("%d %d %d", &x, &y, &z);  
    R_Quadratic(x, y, z);  
    getch();  
}  
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    int add,sub,mul;
    float div;
    printf("enter the two number firstly number and then its power\n");
    scanf("%d%d",&a,&b);
    c = pow(a,b);
    printf("%d",c);
    scanf("%d",)
    printf("enter the operator to which operation you want to perform");
    
    

}