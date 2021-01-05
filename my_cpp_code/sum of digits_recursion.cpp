#include<iostream>
using namespace std;
void sum(int n,int *s)
{
	if(n!=0)
	{
		*s = *s + n%10;
		sum(n/10,s);
	}
}
int main()
{
	int n,s = 0;
	cin>>n;
	sum(n,&s);
	cout<<s;
}
