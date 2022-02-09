#include<iostream>
using namespace std;
int getLargest(int arr[],int n)
{
for(int i=0;i<n;i++)
{
bool flag=true;
for(int j=0;j<n;j++)
{
if(arr[j]>arr[i])
{
flag=false;
break;
}
}
if(flag==true)
return i;
}
return -1;
}
int main()
{
int arr[]={10,20,30,40},n=4;
cout<<getLargest(arr,n);
}