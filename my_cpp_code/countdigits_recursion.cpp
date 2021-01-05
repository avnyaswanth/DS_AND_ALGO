#include<iostream>
using namespace std;
int count(int n,int *c)
{
	if(n!=0)
	{
		(*c)++;
		count(n/10,c);
	}
}
int main()
{
	int n,c = 0;
	cin>>n;
	count(n,&c);
	cout<<c;
}
