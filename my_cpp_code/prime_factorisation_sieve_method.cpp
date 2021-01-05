#include<bits/stdc++.h>
using namespace std;

// prime factorisation using sieve

int maxN = 1000000;
int ar[10000001];
void sieve_fact(int n)
{
	for(int i=0;i<=maxN;i++) 
	ar[i] = -1;
	
	for(int i=2;i<=maxN;i++)
	{
		if(ar[i]==-1)
		{
			for(int j = i;j<=maxN;j+= i)
				if(ar[j]==-1)
				ar[j] = i;
		}
	}
	cout<<"prime factorisation of n is: ";
	while(n>1)
	{
		cout<<ar[n];
		n = n/ar[n];
		if(n>1)
			cout<<'*';
	}
}

int main()
{
	int n;
	cout<<"Enter the number";
	cin>>n;
	sieve_fact(n);
}
