#include<iostream>
using namespace std;
bool isSorted(int arr[],int n)
{
for(int i=1;i<n;i++)
if(arr[i]<arr[i-1])
return false;
return true;
}
int main()
{
int arr[]={10,20,304,40},n=4;
cout<<isSorted(arr,n);
}