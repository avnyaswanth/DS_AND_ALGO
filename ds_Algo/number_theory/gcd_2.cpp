#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	ofstream fos;
	fos.open("gcd_.txt",ios::out);
	if(fos==0)
	cout<<"file not opening";
	int a,b;
	cin>>a>>b;
	fos<<"GCD of "<<a<<' '<<b<<"is\n";
	while(a!=b)
	{
		if(a>b)
		a = a-b;
		else
		b = b-a;
	}
	fos<<a;
	fos.close();
}
