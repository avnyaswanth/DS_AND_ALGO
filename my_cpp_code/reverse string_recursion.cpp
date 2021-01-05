#include<iostream>
using namespace std;
void reverse(char *str,int n)
{
	if(n>=0)
	{
		cout<<str[n];
		reverse(str,n-1);
	}
}
int main()
{
	char str[] = "yaswanth";
	int n = sizeof(str)/sizeof(str[0]);
	reverse(str,n-1);
}
