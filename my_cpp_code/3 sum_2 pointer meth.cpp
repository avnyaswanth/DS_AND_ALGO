#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,tar,l,r,x;
	cout<<"Enter n and target";
	cin>>n>>tar;
	vector<int>ar;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		ar.push_back(x);
	}
	sort(ar.begin(),ar.end())  ;
	for(int i=0;i<n-2;i++)
	{
		l = i+1;
		r = n-1;
		while(l<r)
		{
			if(ar[i]+ar[l]+ar[r] == tar)
			{
			cout<<ar[i]<<' '<<ar[l]<<' '<<ar[r];
			exit(0);
			}
			else if(ar[i]+ar[l]+ar[r]<tar)
			l++;
			else
			r--;
		}
	}
}
