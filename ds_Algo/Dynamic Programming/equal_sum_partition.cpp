#include<iostream>
using namespace std;
bool equal_sum_partition(int *arr,int n,int key)
{
	bool t[n+1][key+1];
	for(int i=0;i<=key;i++)
	{
		t[0][i] = false;
	}
	for(int i=0;i<=n;i++)
	{
		t[i][0] = true;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=key;j++)
		{
			
			if(arr[i-1]<=j)
			t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
			else
			t[i][j] = t[i-1][j]; 
		}
	}
	return t[n][key]; //  prints 0 if subset not found else prints 1
}
int main()
{
	int n;
	cout<<"Enter n";
	cin>>n;
	int *arr = new int[n];
	cout<<"Enter the nums";
	int sum =0;
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	sum += arr[i];
	}
	if(sum%2==0)
	cout<<equal_sum_partition(arr,n,sum/2);
	else
	cout<<0;
}
