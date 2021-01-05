#include<iostream>
using namespace std;
// Rotating one by one
void rotate(int *arr,int n)
{
	int temp = arr[0];
	for(int i=0;i<n-1;i++)
	arr[i] = arr[i+1];
	arr[n-1] = temp;
}

int main()
{
	int n,arr[n],pos;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Enter number of eles to rotate";
	cin>>pos;
	 for(int i=0;i<pos;i++)
	 rotate(arr,n);
	 for(int i=0;i<n;i++)
	 cout<<arr[i]<<ends;
}
