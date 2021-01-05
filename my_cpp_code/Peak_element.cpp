#include<iostream>
using namespace std;
//  Algorithmic Approach
int peak(int *arr,int n,int start,int end)
{
	int mid;
	if(n==1)
    return 0;
    int start = 0,end = n-1;
    int mid = 0;
    while(start<=end)
    {
        mid = start +(end-start)/2;
        if(mid > 0 && mid < n-1)
        {
            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1])
                return mid;
            else if(nums[mid]>nums[mid-1])
                start = mid+1;
            else end = mid-1;
        }
        else
        {
            if(mid==0)
            {
                if(nums[mid]>nums[mid+1])
                    return mid;
                else return mid+1;
            }
            else
            {
                if(nums[mid]>nums[mid-1])
                    return mid;
                else
                    return mid-1;
            }
        }
    }
    return -1;
}
int main()
{
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int l = 0,r = n-1;
	int mid;
	cout<<peak(arr,n,l,r);
}

//Naive Approach
//
//for(int i=0;i<n;i++)
//	{
//		if(i==0)
//		{
//			if(arr[i]>arr[i+1])
//			cout<<arr[i];
//		}
//		else if(i==n-1)
//		{
//			if(arr[i]>arr[i-1])
//			cout<<arr[i];
//		}
//		else
//		{
//			 if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
//			 cout<<arr[i];
//		}
//	}
