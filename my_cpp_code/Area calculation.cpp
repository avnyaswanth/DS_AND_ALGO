#include<iostream>
using namespace std;
class Shape
{
	public:
	double x,y;
	void get_data()
	{
			cin>>x>>y;
	}
	virtual double display(){};
};
class Triangle:public Shape
{
	public:
		double display()
		{
				cout<<"Triangle area:";
				return ((1/2)*x*y);
		}
};
class Rectangle:public Shape
{
	public:
		double display()
		{
				cout<<"Rectangle area:";
				return(x*y);
		}
};
int main()
{
	Shape *S;
	Rectangle R;
	double x,y,area;
	cout<<"Enter the values of length and breadth ";
	S = &R;
	S->get_data();
		area = S ->display();
		cout<<area<<endl;
	return 0;
}

