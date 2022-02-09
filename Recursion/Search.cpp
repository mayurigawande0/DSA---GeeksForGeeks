#include<iostream>
using namespace std;
int search(int arr[],int n,int x)
{
for(int i=0;i<n;i++)
{
if(arr[i]==x)
return i;
}
return -1;
}
int main()
{
int arr[]={10,20,30,40},n=4;
int x=40;
cout<<search(arr,n,x);
}