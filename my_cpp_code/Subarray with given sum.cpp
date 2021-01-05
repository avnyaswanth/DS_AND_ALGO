
#include<iostream>
#include<string>
using namespace std;

string sum_array(int *a,int N,int S)
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
			{
				cout<<a[k]<<ends;
				sum = sum + a[k];
				if(sum == S)
				return(k + " "+ p);
			}
			cout<<endl;
			++index;
			sum = 0;
		}
		cout<<endl;
		index = 0;
		--temp;
		++p;
	}
	return "-1";
}

int main()
{
	int T;
	int N,S;
	cout<<"Enter the number of test cases";
	cin>>T;
	int i=0;
	while(T--)
	{
		cout<<"Enter number of ele and required sum";
		cin>>N>>S;
		int *a = new int[N];
		i = 0;
		cout<<"Enter the elements";
		while(N--)
		{
			 cin>>a[i];
			 i++;
		}
		cout<<endl<<sum_array(a,N,S);
	}
}
