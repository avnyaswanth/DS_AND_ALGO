#include<iostream>
using namespace std;

int square_root(int n)
{
	if(n==0||n==1)
	return n;
	int start = 1,end = n/2;
	int res,mid ;
	while(start<=end)
	{
		mid = start+(end-start)/2;
		if(mid*mid==n)
		return mid;
		else if(mid*mid<n)
		{
			res = mid;
			start = mid+1;
		}
		else end = mid - 1;
	}
	return res;
}

int main()
{
	int n;
	cout<<"Enter n";
	cin>>n;
	cout<<square_root(n);
}
