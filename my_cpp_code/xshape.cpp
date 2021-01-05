#include<iostream>
using namespace std;
int main()
{
	string name = "geeksforgeeks";
	int n = name.length();
	for(int i=0;i<n;i++)
	{
		for(int i=0;i<5;i++)
		cout<<"\t";
		for(int j=0;j<n;j++)
		{
			if(j==i||j==n-i-1)
				cout<<name[i];
				else cout<<ends;
		}
		cout<<endl;
	}
}
