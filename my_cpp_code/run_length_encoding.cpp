#include<bits/stdc++.h>

#define REP(i,n) for(i=0;i<n;i++)

void encoding(string s)
{
	int n = s.length();
	string encoded = "";
	int i,idx = 0;
	REP(i,n)
	{
		if(s[idx] != s[i])
		{
			encoded +=((i-idx)+'0');
			encoded += s[idx];
			idx = i;
		}
	}
	encoded += ((n-idx)+'0');
	encoded += s[idx];
	cout<<encoded;
}

int main()
{
	string s;
	cout<<"Enter the string";
	cin>>s;
	encoding(s);
}

//void decoding(string s)
//{
//	int n = s.length();
//	string decoded = "";
//	int count = 0;
//	int i;
//	for(i=0;i<n-1;i++)
//	{
//		if(isdigit(s[i]))
//		{
//			count = s[i]-48;
//			while(count)
//			{
//				decoded += s[i+1];
//				count--;
//			}
//		}
//	}
//	cout<<decoded;
//}

