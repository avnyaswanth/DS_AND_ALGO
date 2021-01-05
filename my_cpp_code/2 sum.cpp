#include<iostream>
using namespace std;
int main()
{
	int n,x=0,tar;
	cin>>n;
	cout<<"Enter target";
	cin>>tar;
	cout<<"Enter array el";
	int *ar = new int [n];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ar[i]+ar[j]==tar)
			{
			cout<<i<<' '<<j;
			x++;
			break;
		}
		if(x)
		break;
		}
	}
	if(x==0)
	cout<<"No sol";
}
