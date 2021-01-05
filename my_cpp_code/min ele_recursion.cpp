#include<iostream>
#include<limits.h>
using namespace std;
void great(int *arr,int n,int *min)
{
	if(n>=0)
	{
		if(arr[n]<*min)
		{
			*min = arr[n];
		}
		great(arr,n-1,min);
	}
}
int main()
{
	int n,arr[n],min = INT_MAX;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	great(arr,n-1,&min);
	cout<<min;
}
