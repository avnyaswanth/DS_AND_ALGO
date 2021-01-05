#include<bits/stdc++.h>
#define lli long long int
#define mod 1000000007

// finding the gcd of (a^n + b^n),|a-b| where 1<= a,b,n<=10^12
// the result can be large so find modulo of mod


using namespace std;

lli power(lli x,lli n,lli d)
{
	lli res = 1;
	while(n)
	{
		if(n%2==0)
		{
			x = ((x%d) * (x*d)) % d;
			n = n/2;
		}
		res = ((res % d) * (x % d)) % d , n--;
	}
	return res;
}

lli gcd(lli a,lli b,lli n)
{
	if(a == b)
	{
		return (power(a,n,mod)+power(b,n,mod)) % mod ;
	}
	lli num = a - b;
	lli ans = 1;
	for(lli i=1;i*i<=num;i++)
	{
		lli temp;
		temp = (power(a,n,i)+power(b,n,i)) % i;
		if(temp==0)
		ans = max(ans,i);
//		cout<<ans<<endl;
		temp = (power(a,n,num/i)+power(b,n,num/i)) % (num/i);
		cout<<temp<<endl;
		if(temp==0)
		ans = max(ans,num/i);
		cout<<temp<<endl;

//		cout<<ans<<endl;
	}
	return ans % mod;
}

int main()
{
	lli a,b,n,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>n;
		cout<<gcd(a,b,n);
	}
}
