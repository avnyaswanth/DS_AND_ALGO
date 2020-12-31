#include<iostream>
#include<typeinfo>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
	//cout<<typeid(int).name();
	vector<int> v;
	for(int i=0;i<5;i++)
	{
		v.push_back(i+1);
	}
	cout<<*max_element(v.begin(),v.end());
}
