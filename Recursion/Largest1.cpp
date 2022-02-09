#include<iostream>
using namespace std;
int getMax(int arr[],int n)
{
int max=arr[0];
for(int i=0;i<n;i++)
{
if(arr[i]>max)
max=arr[i];
}
return max;
}
int main()
{
int arr[]={10,20,30,40},n=4;
cout<<getMax(arr,n);
}