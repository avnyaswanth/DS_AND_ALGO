#include<iostream>
using namespace std;
class STUDENT
{
	public:
	int roll;
	string name;
	void get_data()
	{
		cout<<"Enter name and roll number";
		cin>>name>>roll;
	}
};
class EXAM : public STUDENT
{
	public:
		int Marks[6];
		void sub_marks()
		{
			cout<<"Enter marks of 6 subjects";
			for(int i=0;i<6;i++)
			cin>>Marks[i];
		}
};
class RESULT:public EXAM
{
	public :
		int result = 0;
		void total()
		{
			for(int i=0;i<6;i++)
			result = result + Marks[i];
		//	cout<<Marks[i]<<endl;
		}
		void print_result()
		{
			cout<<"Total marks : "<<result;
		}
};
int main()
{
//	STUDENT s;
//	s.get_data();
//	EXAM e;
//	e.sub_marks();
//	RESULT r;
//	r.total();
//	r.print_result();
	RESULT R;
	R.get_data();
	R.sub_marks();
	R.total();
	R.print_result();
}
