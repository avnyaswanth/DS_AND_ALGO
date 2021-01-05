#include<iostream>
#include<iomanip>
#include<float.h>
using namespace std;

double cube_root(double n,int p)
{
	cout<<"double :"<<DBL_MAX<<endl;
	if(n==0||n==1)
	return n;
	int start = 1,end = n/3;
	double res;
	double mid;
	while(start<=end)
	{
		mid = (start+(end-start)/2);
		if(mid*mid==n/mid)
		return mid;
		else if(mid*mid<n/mid)
		{
			res = mid;
			start = mid+1;
		}
		else end = mid - 1;
	}
//	while(s<=e)
//	{
//		mid = s+(e-s)/2;
//		if(mid*mid<n/mid)
//		{
//			res = mid;
//			s = mid + 0.1;
//		}
//		else e = mid-0.1;
//	}
	double precision = 0.1;
	for(int i=0;i<p;i++)
	{
		while(res*res<=n/res)
		{
			res += precision;
		}
		res = res - precision;
		precision /= 10;
	}
	return res;
}

int main()
{
	double n,p;
	cout<<"Enter n and precision";
	cin>>n>>p;
	double ans = cube_root(n,p);
	cout<<fixed<<setprecision(p)<<ans;

	// setprecision(p) along with fixed when used provides the precision for the floating point nums for p places
}
