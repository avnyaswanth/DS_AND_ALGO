#include<iostream>
//  Insertion of element inside a sorted array
using namespace std;
int main()
{
	int arr[] = {1,5,8,11,16,23};
	int n = sizeof(arr)/sizeof(arr[0]);
	int a[n+1];
	int x,temp;
	cin>>x;
	if(x<arr[0])
	{
		a[0] = x;
		for(int i=1;i<=n;i++)
		a[i] = arr[i-1];
	}
	else if(x>arr[n-1])
	{
		a[n] = x;
		for(int i=0;i<n;i++)
		a[i] = arr[i];
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(x>=arr[i]&&x<=arr[i+1])
			{
				a[temp=i+1] = x;
 				break;
			}
		}
		for(int i=0;i<temp;i++)
		a[i] = arr[i];
		for(int i=temp+1;i<=n;i++)
		a[i] = arr[i-1];
	}
	for(int i=0;i<=n;i++)
	cout<<a[i]<<ends;
}
