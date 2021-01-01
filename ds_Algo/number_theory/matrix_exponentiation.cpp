#include<iostream>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)
#define N 101

// The total time complexity is O(M^3 * logN)  M is the dimension

int arr[101][101],I[101][101];

void multiply(int I[][N],int arr[][N],int dim)
{
	int result[dim][dim];
	REP(i,dim)
		REP(j,dim)
		{
			result[i][j] = 0;
			REP(k,dim)
				result[i][j] += arr[i][k] * I[k][j];
		}
	
	REP(i,dim)
		REP(j,dim)
			I[i][j] = result[i][j];
}

void power(int arr[][N],int dim,int n)
{
	REP(i,N)
		REP(j,N)
		{
			if(i==j)
				I[i][j] = 1;
			else I[i][j] = 0;
		}
	
	while(n)
	{
		if(n%2)
			multiply(I,arr,dim),n--;
		multiply(arr,arr,dim),n /= 2;
	}
	
	REP(i,dim)
		REP(j,dim)
			arr[i][j] = I[i][j];
}

void print(int arr[][N],int dim)
{
	REP(i,dim)
	{
		REP(j,dim)
			cout<<arr[i][j]<<ends;
		cout<<endl;
	}
}

int main()
{
	int dim,n;
	cout<<"enter dimension and power";
	cin>>dim>>n;
	REP(i,dim)
	REP(j,dim)
		cin>>arr[i][j];
	power(arr,dim,n);
	print(arr,dim);
}


