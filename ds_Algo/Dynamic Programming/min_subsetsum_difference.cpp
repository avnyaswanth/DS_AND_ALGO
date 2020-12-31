#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n and key value";
	cin>>n;
	int *arr = new int[n];
	cout<<"Enter the nums";
	int range = 0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		range += arr[i];
	}
	bool t[n+1][range+1];
	for(int i=0;i<=range;i++)
	{
		t[0][i] = false;
	}
	for(int i=0;i<=n;i++)
	{
		t[i][0] = true;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=range;j++)
		{
			
			if(arr[i-1]<=j)
			t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
			else
			t[i][j] = t[i-1][j]; 
		}
	}
	int min = INT_MAX;
	for(int i=0;i<=range/2;i++)
	{
		if(t[n][i] = true)
		{
			if(min > abs(range-(2*i)))
			min = range-(2*i);
		}
	}
	cout<<min;
}
