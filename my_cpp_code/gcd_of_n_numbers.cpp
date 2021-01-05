#include<iostream>
using namespace std;


int find_gcd(int a,int b)
{
	if(b==0)
	return a ;
	return(find_gcd(b,a%b));
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];  
	int gcd[n+1];
	gcd[0] = 0;
 	for(int i=1;i<=n;i++)
	{
		gcd[i] = find_gcd(gcd[i-1],arr[i-1]);
	}
	cout<<gcd[n];
}
