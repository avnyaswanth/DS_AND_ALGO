#include<iostream>
using namespace std;

// finding the pivot or number of times array rotated anti clock wise for distinct elements;

int rotated(int *arr,int n)
{
	int start = 0,end = n-1;
	int next = 0,prev = 0,mid;
	while(start<=end)
	{
		mid = start +(end-start)/2;
		next = (mid+1)%n;
		prev =(mid-1+n)%n;
		if(arr[mid]<=arr[next] && arr[mid]<=arr[prev])
		return mid;
		else if(arr[start]<arr[mid])
		start = mid+1;
		else end = mid-1;
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<rotated(arr,n);
}
