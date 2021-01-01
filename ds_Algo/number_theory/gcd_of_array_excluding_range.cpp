#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	if(b==0) return a;
	
	return gcd(b,a%b);
}

int main()
{
	int l,r,n;
	int q;
	int t = 4;
	while(t--)
	{
		cout<<"Enter n";
		cin>>n;
		cout<<"Enter the number of quories";
		cin>>q;
		int *arr = new int[n+1];
		cout<<"Enter array elements";
		for(int i=1;i<=n;i++)
		cin>>arr[i];
		while(q--)
		{
			cout<<"enter the excluding range";
			cin>>l>>r;
			int pre[l] ; // 0 to l-1 eles
			int suf[n+2];
			pre[0] = 0;
			suf[n+1] = 0;
			for(int i=1;i<l;i++)    // here insted of n range we can take upto l if we know l value before 
			pre[i] = gcd(arr[i],pre[i-1]);
			for(int i=n;i>r;i--)  //  from r+1 to n 
			suf[i] = gcd(arr[i],suf[i+1]);
		
			cout<<"prefix l -1"<<pre[l-1]<<ends<<"suffix r+1"<<suf[r+1]<<endl;
			cout<<gcd(pre[l-1],suf[r+1])<<endl;
		}
	}
}
