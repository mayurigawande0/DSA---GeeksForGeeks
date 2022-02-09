#include<iostream>
using namespace std;
void lroated(int arr[],int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
    arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
void leftroated(int arr[],int d,int n)
{
for(int i=0;i<n;i++)
{
lroated(arr,n);
}
}
int main()
{
int arr[]={1,2,3,4,5},d=2,n=5;
leftroated(arr,d,n);
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
}