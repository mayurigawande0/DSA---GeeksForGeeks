//Naive Solution
#include<iostream>
using namespace std;
int countzero(int n)
{
int fact=1;
for(int i=1;i<=n;i++)
fact=fact*i;
int res=0;
while(fact%10==0)
{
res++;
n=n/10;
}
return res;
}
int main()
{
int n;
cin>>n;
}