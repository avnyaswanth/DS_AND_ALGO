#include<iostream>
using namespace std;
int count = 0;
class test 
{
	public :
	int x;
		test() {}
		test(int x)
		{
			this->x = x;
		}
		test(test &t)
		{
			x = t.x;
		}
		void print()
		{
			count++;
			cout<<"Object "<<count<<" value : "<<x<<endl;
		}
};
int main()
{
	test t1(10),t2(20),t3(30);
	test t4 = t1;
	t4.print();
	test t5 = t2;
	t5.print();
	test t6 = t3;
	t6.print();
}
