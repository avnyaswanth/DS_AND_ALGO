#include<iostream>
using namespace std;



//#define REP(i,n) for(int i=0;i<=n;i++)  
#define lli long long int
int f[3];
int I[3][3],T[3][3];

void mul(int A[][3],int B[][3],int dim)
{
	int res[dim+1][dim+1];
	for(int i=1;i<=dim;i++)
	{
		for(int j=1;j<=dim;j++)
		{
			res[i][j] = 0;
			for(int k=1;k<=dim;k++)
			{
				res[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	
	for(int i=0;i<=dim;i++)
		for(int j=0;j<=dim;j++)
			A[i][j] = res[i][j];
}

lli find_fib(int n)
{
	if(n<=2) return f[n];
	
	I[1][1] = I[2][2] = 1;
	I[1][2] = I[2][1] = 0;
	
	T[1][1] = 0;
	T[1][2] = T[2][1] = T[2][2] = 1;
	--n;
	while(n)
	{
		if(n%2)
			mul(I, T, 2), n--;
		else
		mul(T, T, 2), n /= 2;
	}
	
	lli Fn = (f[1] * I[1][1] + f[2] * I[2][1]);
	return Fn;
}

int main()
{
	int t = 5;
	while(t--)
	{
		int n;
		cout<<"enter f1 and f2 for the series and n";
		cin>>f[1]>>f[2]>>n;
		++n;
		cout<<find_fib(n);
	}
}
