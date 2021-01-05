
// Love symbol generations....working only for odd n values; 
#include<iostream>
using namespace std;
void back_space()
{
	for(int i=0;i<5;i++)
		cout<<"\t";
}
void print_v(int n)
{
	for(int i=1;i<=n;i++)
	{
		back_space();
		for(int j=1;j<=2*n-i;j++)
		{
			if(j==i||j==2*n-i)
			cout<<"*";
			else cout<<ends;
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter n value";
	cin>>n;
	int x = 0;
	for(int i=0;i<n;i++)
	{
		
		if(i<=n/2)
		{
				back_space();
			for(int j=1;j<=2*n-1;j++)
			{
				if(j==(n+(n/2)+i)||j==(n-(n/2)+i)||j==(n+(n/2)-i)||j==(n-(n/2)-i))
				cout<<"*";
				else
				cout<<ends;
			}
			cout<<endl;
		}
		else
		{
			print_v(n);
			break;
		}
	}
}
