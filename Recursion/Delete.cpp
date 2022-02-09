#include<iostream>
using namespace std;
int delEle(int arr[],int n,int x)
{
int i=0;
for(int i=0;i<n;i++)
{
if(arr[i]==x)
break;
}
if(i==n)
return n;
for(int j=i;j<n-1;j++)
{
arr[j]=arr[j+1];
}
return n-1;
}
int main()
{
int arr[]={3,8,9,10},n=4,x=10;
n=delEle(arr,n,x);
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
}