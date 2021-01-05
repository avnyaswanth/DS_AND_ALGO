#include<iostream>
#include<time.h>
using namespace std;

// O(N) time complexity 

// Any composite number can expressed as product of primes which is called prime factorisation

void brute_primefactorisation(long long int n)
{
	for(long long int i=2;i<=n;i++)
	{
		if(n % i == 0)
		{
			long long int count = 0;
			while(n % i == 0)
			{
				n /= i;
				++count;
			}
			cout<<i<<"^"<<count<<' ';
		}
	}
}

void better_primefactorisation(int n)
{
	for(int i=2;i*i <= n;i++)
	{
		if(n % i == 0)
		{
			int count = 0;
			while(n % i == 0)
			{
				n /= i;
				++count;
			}
			cout<<i<<"^"<<count<<' ';
		}
	}
	if(n > 1)
			cout<<n<<"^"<<1;
}

int main()
{
	long long int n;
	cout<<"Enter n value";
	cin>>n;
	clock_t s,e;
	s = clock();
	better_primefactorisation(n);
	e = clock();
	double total = double(e - s)/CLOCKS_PER_SEC;
	printf("total time : %lf",total);
}
