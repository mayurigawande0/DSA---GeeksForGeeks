#include<iostream>
using namespace std;
int pow(int x,int n)
{
int res=1;
for(int i=1;i<=n;i++)
{
res=res*x;
}
return res;
}
int main()
{
int x,n;
cin>>x>>n;
cout<<pow(x,n);
}