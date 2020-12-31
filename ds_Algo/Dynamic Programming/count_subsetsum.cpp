#include<iostream>
using namespace std;
int main()
{
	int n,key;
	cout<<"Enter n and key value";
	cin>>n>>key;
	int *arr = new int[n];
	cout<<"Enter the nums";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int  t[n+1][key+1];
	for(int i=0;i<=key;i++)
	{
		t[0][i] = 0;
	}
	for(int i=0;i<=n;i++)
	{
		t[i][0] = 1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=key;j++)
		{
			
			if(arr[i-1]<=j) 
			t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];
			else
			t[i][j] = t[i-1][j]; 
		}
	}
	cout<<t[n][key];    
}
