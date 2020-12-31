#include<iostream>
using namespace std;
int max(int a,int b)
{
	return(a<=b?b:a);
}
int main()
{
	int wt[] = {1,2,5,6,7};
	int val[] = {1,6,18,22,28};
	int W = 11;
	int n= 5;
	int t[n+1][W+1];
	for(int i=0;i<=n;i++)
		for(int j=0;j<=W;j++)
		if(i==0||j==0)
		t[i][j] = 0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=W;j++)
			{
				if(wt[i-1]<=j)
				t[i][j] = max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
				else
				t[i][j] = t[i-1][j];
			}
		}
		cout<<t[n][W];
}
