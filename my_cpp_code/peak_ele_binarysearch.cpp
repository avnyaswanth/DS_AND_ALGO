#include<iostream>
using namespace std;

int peak(int arr[],int n)
{
	int s = 0,e = n-1;
	int ans = -1;
	int prev,next,mid;
	while(s<=e)
	{
		mid = s+(e-s)/2;
		prev = (mid-1+n)%n;
		next = (mid+1) % n;
		if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
		return mid;
		else if(arr[s]<=arr[mid])
		s = mid+1;
		else e = mid-1;
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<peak(arr,n);
}
