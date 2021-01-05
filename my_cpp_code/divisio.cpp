#include<bits/stdc++.h>
using namespace std;

void division(int x,int y)
{
	int quotient = 0;
	int sign;
	
	//   1 represent positive,  -1 represent negative
	int x_sign = abs(x)!=x ? -1 : 1;
	int y_sign = abs(y)!=y ? -1 : 1;
	sign = x_sign != y_sign ? -1 : 1;
	x = abs(x),y = abs(y);
	
	while(x>=y)
	{
		x -= y;
		quotient++;
	}
	cout<<sign*quotient;
}

int main()
{
	int x,y;
	cin>>x>>y;
	division(x,y);
}
