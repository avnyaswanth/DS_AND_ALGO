#include<iostream>
using namespace std;

void a_power_b(int a,int b)
{
	int res = 1;
	while(b!=0)
	{
		if(b % 2 != 0)
			res = res*a , b--;
			a *= a , b /= 2;
	}
	cout<<res;
}

int main()
{
	int a,b;
	cout<<"Enter base and exponent";
	cin>>a>>b;
	a_power_b(a,b);
}
