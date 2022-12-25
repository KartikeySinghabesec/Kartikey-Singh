#include <iostream>

using namespace std;
int series(int n)
 
{
   
    return (8 * n * n) + 1;
}
int main()
{
   
   int n;
   cout<<"enter the nth term"<<endl;
   cin >> n;
    cout << series(n);
    return 0;
}
