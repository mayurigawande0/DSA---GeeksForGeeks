#include<iostream>
using namespace std;
void movezero(int arr[],int n)
{
int count=0;
for(int i=0;i<n;i++)
{
if(arr[i]!=0)
{
swap(arr[i],count);
count++;
}
}
}
int main()
{
int arr[]={10,20,30,40,0,0,0,30},n=8;
movezero(arr,n);
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
}