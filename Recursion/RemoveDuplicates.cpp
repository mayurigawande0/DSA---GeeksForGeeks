#include<iostream>
using namespace std;
int remDups(int arr[],int n)
{
int res=1;
for(int i=1;i<n;i++)
{
if(arr[res-1]!=arr[i])
{
arr[res]=arr[i];
res++;
}
}
return res;
}
int main()
{
int arr[]={10,10,10,20,20,20,30,30,30},n=9;
n=remDups(arr,n);
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
}