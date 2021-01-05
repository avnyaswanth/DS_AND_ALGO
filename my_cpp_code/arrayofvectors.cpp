#include<iostream>
using namespace std;
#include<vector>

int main()
{
	vector<int> arr(5);
	int *p = arr.data();
	for(int i=0;i<5;i++)
	*(p+i) = i*5;
	for(int i=0;i<5;i++)
	cout<<arr[i]<<ends;
}
