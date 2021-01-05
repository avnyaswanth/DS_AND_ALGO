#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	string rem_dup;
	int ind=0;
	for(int i=1;i<s.length();i++)
	{
		if(s[ind]!=s[i])
		{
			s[ind+1] = s[i];
			ind++;
		}
	}
	for(int i=0;i<ind+1;i++)
	{
		rem_dup.push_back(s[i]);
	}
	cout<<rem _dup;
}
