#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for(i=2;i*i<=n;i++)

void primecheck(int n)
{
	int i;
	REP(i,n)
	{
		if(n%i==0)
		return;
	}
	cout<<n<<ends;
}
int main()
{
	int l,r;
	cout<<"Enter l and r ";
	cin>>l>>r;
	for(int i=l;i<=r;i++)
	{
		primecheck(i);
	}
}
