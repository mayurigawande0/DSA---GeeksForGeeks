#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
void movezero(int arr[],int n)
{
for(int i=0;i<n;i++)
{
if(arr[i]==0)
{
for(int j=i+1;j<n;j++)
{
if(arr[j]!=0)
swap(arr[i],arr[j]);
}
}
}
}
int main()
{
int arr[]={10,20,0,0,20},n=5;
movezero(arr,n);
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
}