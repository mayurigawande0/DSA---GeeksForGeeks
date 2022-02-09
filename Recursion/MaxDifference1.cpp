#include<iostream>
using namespace std;
int max(int arr[],int n)
{
int res=arr[1]-arr[0],minVal=arr[0];
for(int j=1;j<n;j++)
{
res=max(res,arr[j]-minVal);
minVal=min(res,arr[j]);
}
return res;
}
int main()
{
int arr[]={10,20,30},n=3;
cout<<max(arr,n);
}