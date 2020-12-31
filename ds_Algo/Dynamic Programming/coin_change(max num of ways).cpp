#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	cout<<"Enter n and sum value";
	cin>>n>>sum;
	int *coin_arr = new int[n];
	cout<<"Enter the nums";
	for(int i=0;i<n;i++)
	cin>>coin_arr[i];
	int  t[n+1][sum+1];
	for(int i=0;i<=sum;i++)
	{
		t[0][i] = 0;
	}
	for(int i=0;i<=n;i++)
	{
		t[i][0] = 1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			
			if(coin_arr[i-1]<=j) 
			t[i][j] = t[i][j-coin_arr[i-1]] + t[i-1][j];
			else
			t[i][j] = t[i-1][j]; 
		}
	}
	cout<<"number of ways:"<<t[n][sum];    
}
