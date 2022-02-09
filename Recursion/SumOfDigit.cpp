#include<iostream>
using namespace std;
// int getSum(int n)
// {
// if(n<10)
// return 0;
// return getSum(n/10)+n%10;
// }
// int main()
// {
// int n;
// cin>>n;
// cout<<getSum(n);
// }

int getSum(int n)
{
int res=0;
while(n>=0)
{
res=res+n%10;
n=n/10;
}
return res;
}
int main()
{
cout<<getSum(42);
}