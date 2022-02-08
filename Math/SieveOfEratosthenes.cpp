#include<iostream>
using namespace std;
void printPrimes(int n)
{
for(int i=2;i<=n;i++)
if(isPrime(i))
cout<<i;
}
int main()
{
int n;
cin>>n;
printPrimes(n);
}