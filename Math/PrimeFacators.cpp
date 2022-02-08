#include<iostream>
using namespace std;
void primeFactors(int n)
{
for(int i=2;i<n;i++)
{
if(isPrime(i))
{
int x=i;
while(n%x==0)
{
printf(i);
x=x*i;
}
}
}
}
int main()
{
int n;
cin>>n;
primeFactors(n);
}