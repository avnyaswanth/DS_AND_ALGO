#include<iostream>
#include<Array>
using namespace std;
int main()
{
	int n,tar;
	cout<<"Enter n and target";
	cin>>n>>tar;
	int *ar = new int [n];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				if(ar[i]+ar[j]+ar[k]==tar)
				{
					cout<<i<<' '<<j<<' '<<k;
					exit(0);
				}
			}
		}
	}
}
