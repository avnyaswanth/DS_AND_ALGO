#include<iostream>
using namespace std;
#include<algorithm>
int knapsack(int *wt,int *value,int n,int W)
{
	if(n==0||W==0)
	return 0;
	if(wt[n-1]<=W)
	return(max(value[n-1]+knapsack(wt,value,n-1,W-wt[n-1]),knapsack(wt,value,n-1,W)));
	else
	return(knapsack(wt,value,n-1,W));
}

int main()
{
	int n;
	cout<<"enter n";
	cin>>n;
	int wt[n],value[n];
	cout<<"Enter weights";
	for(int i=0;i<n;i++)
	cin>>wt[i];
	cout<<"enter values";
	for(int i=0;i<n;i++)
	cin>>value[i];
	int W;
	cout<<"Enter knapsack capacity";
	cin>>W;
	cout<<knapsack(wt,value,n,W);
}
