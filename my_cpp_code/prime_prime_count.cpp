#include<iostream>
using namespace std;

#define REP(i,N) for(int i=0;i<N;i++)
#define lli long long int

//  a number X is prime prime if the count of the primes from 1 to X(inclusive) is also a prime
// this is a prob from hacker earth

int maxN = 1000000;
int prime[1000001];w
int p_prime[1000001];
void prime_prime()
{
	REP(i,maxN)
	{
		prime[i] = 1;
	 	prime[0] = prime[1] = 0;
	}
	
	for(lli i=2;i*i<=maxN;i++)
	{
		if(prime[i]==1)
		{
			for(lli j=i*i;j<=maxN;j = j+i )
			{
				prime[j] = 0;
			}
		}
	}
	int count = 0;
	REP(i,maxN)
	{
		if(prime[i] == 1)
		count++;
		
		if(prime[count] == 1)
		p_prime[i] = 1;
		else p_prime[i] = 0;
	}
	
	REP(i,maxN)
	{
		p_prime[i] += p_prime[i-1];
	}
	
}

int main()
{
	int L,R;
	cout<<"Enter L and R";
	cin>>L>>R;
	prime_prime();
	int pp_count = p_prime[R] - p_prime[L-1];
	cout<<pp_count;
}
