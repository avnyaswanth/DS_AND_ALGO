#include<iostream>
using namespace std;
//  longest common subsequence
int lon_com_subseq(string a,string b,int n,int m)
{
	if(m==0||n==0)
	return 0;
	if(t[n][m] != -1)
	return t[n][m];
	if(a[n-1]==b[m-1])
	return(t[n][m] = 1+lon_com_subseq(a,b,n-1,m-1));
	else
	{
		return(t[n][m] = max(lon_com_subseq(a,b,n-1,m),lon_com_subseq(a,b,n,m-1)));
	}
}
int main()
{
	string a,b;
	cout<<"Enter 2 strings";
	cin>>a>>b;
	static int t[a.length()+1][b.length()+1]
	cout<<lon_com_subseq(a,b,a.length(),b.length());
}
