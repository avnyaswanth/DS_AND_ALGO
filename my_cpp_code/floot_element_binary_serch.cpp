#include<iostream>
using namespace std;

int floor_element(int arr[],int n,int target)
{
	int start = 0,end = n-1;
	int mid = 0;
	int ans = -1;
	while(start<=end)
	{
		mid = start +(end-start)/2;
		if(arr[mid]<=target)
		{
			if(arr[mid] == target ])
			return mid;
			ans= mid;
			start = mid+1;
		}
		else end = mid-1;
	}
	return ans; 
}

int main()
{
	int n,target;
	cout<<"enter n and target";
	cin>>n;
	cin>>target;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<floor_element(arr,n,target);
}
