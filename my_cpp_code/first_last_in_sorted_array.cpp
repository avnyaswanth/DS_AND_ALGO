#include<bits/stdc++.h>
using namespace std;

int find_first(vector<int> nums,int target)
{
    int ans = -1;
    int start = 0,end = nums.size()-1;
    int mid;
    int count = 0;
    while(start<=end)
    {
        mid = start +(end-start)/2;
        if(nums[mid]==target)
        {
            ans = mid;
            end = mid-1;
        }
        else if(target<nums[mid])
            end = mid -1;
        else start = mid+1;
    }
    return ans;
}

int find_last(vector<int> nums,int target)
{
    int ans = -1;
    int start = 0,end = nums.size()-1;
    int mid;
    while(start<=end)
    {
        mid = start +(end-start)/2;
        if(nums[mid]==target)
        {
            ans = mid;
            start = mid+1;
        }
        else if(target<nums[mid])
            end = mid -1;
        else start = mid+1;
    }
    return ans;
}

int main()
{
	int n,target;
	cout<<"Enter n and target";
	cin>>n;
	cin>>target;
	vector<int> arr(n);
	int x;
	cout<<"Enter vector elements";
	for(int i=0;i<n;i++)
	{ 
		cin>>x;
		arr.push_back(x);
	}
	int first = find_first(arr,target);
	int last = find_last(arr,target);
	cout<<"indices of first and last occurences of target : ";
	cout<<first<<ends<<last;
}
