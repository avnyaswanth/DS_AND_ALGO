#include<iostream>
using namespace std;
#include<algorithm>
  //  Umbounded knapsack .. rod cutting problem
//int max(int a,int b)
//{
//	return(a<=b?b:a);
//}
int main()
{
	int wt[] = {1,2,3,4,5,6,7,8};
	int val[] = {1,1,1,5,1,1,1,1};
	int W =8;
	int n= 8;
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
				t[i][j] = max(val[i-1]+t[i][j-wt[i-1]],t[i-1][j]);
				else
				t[i][j] = t[i-1][j];
			}
		}
		cout<<t[n][W];
}
