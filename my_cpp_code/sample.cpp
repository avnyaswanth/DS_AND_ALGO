#include<iostream>
using namespace std;
#include<vector>
vector<int> input()
{
	return vector<int>({0,1,2});
}
int main()
{
	vector<int> v = input();
	cout<<v[2 ];
}
