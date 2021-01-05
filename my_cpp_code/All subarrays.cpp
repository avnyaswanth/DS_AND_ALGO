
//  Printing all subarrays of a given array

#include<iostream>
#include<string>
using namespace std;

void sum_array(int *a,int N)
{
	int x = (N/2)*(1+N);
	int temp = N;
	int sum = 0;
	int p = 0;
	int index = 0;
	for(int i=1;i<=x;i++)
	{
		for(int j=0;j<temp;j++)
		{
			for(int k=index;k<=index+p;k++)
			cout<<a[k]<<ends;
				
			cout<<endl;
			++index;
		}
		cout<<endl;
		index = 0;
		--temp;
		++p;
	}
}

int main()
{
	int N;
	cout<<"Enter n value";
	cin>>N;
	int *a = new int[N];
	cout<<"Enter array values";
	for(int i=0;i<N;i++)
	cin>>a[i];
		sum_array(a,N);
}
