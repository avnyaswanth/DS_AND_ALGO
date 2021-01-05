#include<iostream>
using namespace std;

// finding min diff element in the sorted array;

int min_diff_ele(int *arr,int key,int n)
 {
 	int l = 0;
 	int r = n-1;
 	int mid;
 	while(l<=r)
 	{
 		mid = (l+r)/2;
 		if(key==arr[mid])
 		return mid;
 		if(key>arr[mid])
 			l = mid+1;
		 else
		 	r = mid-1;
	 }
	return abs(key-arr[l]) < abs(key-arr[r]) ? arr[l] : arr[r] ;
 }

int main()
{
	int n,key;
	cout<<"Enter n and key";
	cin>>n>>key;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<min_diff_ele(arr,key,n);
}
