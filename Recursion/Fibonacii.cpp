#include<iostream>
using namespace std;
int fibonacii(int n)
{
if(n==0) return 0;
if(n==1) return 1;
return fibonacii(n-2)+fibonacii(n-1);
}
int main()
{
int n;
cin>>n;
cout<<fibonacii(n);
}