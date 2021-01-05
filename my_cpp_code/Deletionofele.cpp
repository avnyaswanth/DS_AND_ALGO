#include<iostream>
using namespace std;
int main()
{
	int n,x,arr[n];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Enter position to delete";
	cin>>x;
		for(int i=x-1;i<n-1;i++)
		arr[i] = arr[i+1];
		for(int i=0;i<n-1;i++)
		cout<<arr[i]<<ends;
}
