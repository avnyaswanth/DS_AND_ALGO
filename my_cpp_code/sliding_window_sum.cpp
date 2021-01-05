#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter n";
	int n;cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter k";
	int k; cin>>k;
	int max = 0;
	for(int i=0;i<k;i++)
	max = max+arr[i];
	int window_sum = max;
	for(int i=k;i<n;i++)
	{
		window_sum = window_sum-arr[i-k]+arr[i];
		if(window_sum>max)
			max = window_sum;
	}
	cout<<max;
}
