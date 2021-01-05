#include<iostream>
using namespace std;
class student
{
	public:
	string name;
		int roll;
		char sec;
		void print_data()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Roll: "<<roll<<endl;
			cout<<"Section: "<<sec<<endl;
		}
};
int main()
{
	student t;
	student *s=&t;
	
	cout<<"enter roll,section and name of student";	
	
	cin>>s->roll;
	cin>>s->sec;
	cin>>s->name;
//	getline(c,20);
//	cin.getline(s->name,10);
	s->print_data();
}
