#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
	string a,b;
	cin>>a>>b;
	int t[a.length()+1][b.length()+1];
	for(int i=0;i<=b.length();i++)
	t[0][i] = 0;
	for(int j=0;j<=a.length();j++)
	t[j][0] = 0;
	for(int i=1;i<=a.length();i++)
	{
		for(int j=0;j<=b.length();j++)
		{
			if(a[i] == b[j])
			t[i][j] = 1 + t[i-1][j-1];
			else
			{
				t[i][j] = max(t[i][j-1],t[i-1][j]);
			}
		}
	}
	cout<<t[a.length()][b.length()];
}
