#include<iostream>
using namespace std;
bool isPal(int n)
{
int rev=0;
int m=n;
while(m!=0)
{
int ld=m%10;
rev=rev*10+ld;
m=m/10;
}
return (rev==m);
}
int main()
{
int n;
cin>>n;
isPal(n);
if(n==1)
{
cout<<"Number is Palindrome";
}
else
{
cout<<"Number is not Palindrome";
}
}