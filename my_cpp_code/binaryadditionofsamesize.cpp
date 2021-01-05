#include<iostream>
using namespace std;
int main()
{
	int bs1,bs2,rem = 0;
	cout<<"enter the sizes of 2 binary numbers";
	cin>>bs1>>bs2;
	int x = bs1>bs2?bs1:bs2;
	//cout<<x;
	int bin1[x], bin2[x],bin3[x+1];
	for(int i=0;i<x;i++)
	cin>>bin1[i];
	for(int i=0;i<x;i++)
	cin>>bin2[i];
	for(int i=x-1;i>=0;i--)
	{
		bin3[i+1] = (bin1[i] + bin2[i] + rem)%2;
		rem = (bin3[i+1]) / 2 ;
	}
	bin3[0] = rem;
	for(int i =0;i<=x;i++)
	cout<<bin3[i]<<ends;
}
