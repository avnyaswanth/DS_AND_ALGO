#include<iostream>
using namespace std;
void back_space()
{
	for(int i=0;i<4;i++)
			cout<<"\t";
}
void next_line()
{
	for(int i=0;i<5;i++)
	cout<<endl;
}
int main()
{
	string str = "H A P P Y  D I W A L I";
	int n;
	cin>>n;
	next_line();
	for(int i=1;i<n;i++)
	{
			back_space();
		if(i>1)
			for(int j=1;j<i;j++)
			cout<<ends;
		for(int k=i;k<=2*n-i;k++)
			if(k==i||k==n||k==2*n-i)
				cout<<"*";
			else cout<<ends;
		cout<<endl;;
	}
	for(int i=0;i<n;i++)
	{
		back_space();
		for(int j=n-1;j>i;j--)
			cout<<ends;
		for(int k=0;k<=2*i;k++)
			cout<<"*";
		cout<<endl;
	}
	cout<<endl;
	back_space();
	cout<<str<<ends<<ends<<str;
	next_line();
}
