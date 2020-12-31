#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int temp = 2,flag = 0;
	for(int i=1;i<=n;i++)
	{
		flag = 0;
		for(int j=2;j<=sqrt(temp);j++)
		{
			if(temp%j==0)
			{
				flag++;
				break;
			}
		}
		if(flag==0)
		cout<<temp<<ends;
		else
			i--;
			temp++;
	}
}
