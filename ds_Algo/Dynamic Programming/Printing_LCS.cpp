#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
	string a,b;
	cin>>a>>b;
	int t[a.length()+1][b.length()+1];
	for(int i=0;i<=a.length();i++)
	for(int j=0;j<=b.length();j++)
	if( i == 0 || j == 0)
	t[i][j] = 0;
	for(int i=1;i<=a.length();i++)
	{
		for(int j=1;j<=b.length();j++)
		{
			if(a[i-1] == b[j-1])
			t[i][j] = 1 + t[i-1][j-1];
			else
			{
				t[i][j] = max(t[i][j-1],t[i-1][j]);
			}
		}
	}
	int i = a.length(),j = b.length();
	string str;
	while(i > 0 && j > 0)
	{
		if(a[i-1] == b[j-1])
		{
			str += a[i-1];
			i--,j--;
		}
		else
		{
			if(t[i][j-1] > t[i-1][j])
			j--;
			else
			i--;
		}
	}
	reverse(str.begin(),str.end());
	cout<<str;
}
