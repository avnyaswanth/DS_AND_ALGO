#include<iostream>
using namespace std;
int t[100][100] ;
int max(int a,int b)
{
	return(a>=b)? a : b;
}
int knapsack(int wt[],int val[],int W,int n)
{
	if(W==0||n==0)
	return 0;
	if(t[n][W]!= -1 )
	return(t[n][W]);
	if(wt[n-1]<=W)
	{
	(t[n][W] = max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1)));
	return t[n][W];
    }
	else {
	(t[n][W] = knapsack(wt,val,W,n-1));
	return(t[n][W]);
}
}
int main()
{
	int wt[] = {10,20,30};
	int val[] = {60,100,120};
	int W = 50;
	for(int i=0;i<3+1;i++)
	for(int j=0;j<50+1;j++)
	t[i][j] = -1;
	cout<<knapsack(wt,val,W,3)<<endl;
}
