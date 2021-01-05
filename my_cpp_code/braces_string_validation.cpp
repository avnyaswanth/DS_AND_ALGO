#include<iostream>
#include<stack>
using namespace std;
bool check(string s)
{
	stack<char> stk;
	int len = s.length();
	for(size_t i = 0;i<len;i++)
	{
		if(s[i]=='{'||s[i]=='('||s[i]=='[')
			stk.push(s[i]);
		else if((s[i]=='}'&&stk.top()=='{')||(s[i]==']'&&stk.top()=='[')||(s[i]==')'&&stk.top()=='(' ))
			stk.pop();
		else
			return 0;
	}
	return stk.size()==0;
}
int main()
{
	string seq;
	cout<<"Enter the braces string";
	cin>>seq;
	if(check(seq))
	cout<<"Valid String";
	else cout<<"Invalid String";
}
