#include<stdio.h>
int main()
{
    int i,j,k,a,b;
    int arr[]={};
    printf("enter the total number of choclates: ");
    scanf("%d",&k);
    printf("the taste of each chochlates in the box are marked between 1 to 9 depending their taste\n");
    

    for(i=0;i<=k;i++)
    {
        printf("enter the name of each chochlate as in the box in number %d");
        scanf("%d",&arr[i]);

    }
}





/*
bool digit (long long n)
{
    vector<int> a;
    while(n!=0)
    {
        a.push_back(n%10);
        n/=10;

    }
    if(a.size()==1) return false;
    for(int i=0;i<a.size()-1;i++)
    {
        if(abs(a[i]-a[i+]))
    }
}*/