#include<iostream>
using namespace std;
class first
{
	public :
		string bookname;
		int booknumber;
		void getdata()
		{
			cout<<"Enter bookname and booknumber";
			cin>>bookname>>booknumber;
		}
		void putdata()
		{
			cout<<"Book Name: "<<bookname<<endl;
			cout<<"Book Number: "<<booknumber<<endl;
		}
};
class second
{
	public:
		string authorname;
		string publisher;
		void getdata_s()
		{
			cout<<"Enter author name and publisher";
			cin>>authorname>>publisher;
		}
		void showdata()
		
		{
			cout<<"Author Name: "<<authorname<<endl;
			cout<<"Publisher: "<<publisher<<endl;
		}
};
class third:public first,public second
{
	public:
		int num_of_pages;
		int year_published;
		void getdata_t()
		{
			cout<<"Enter number of pages and year of publication";
			cin>>num_of_pages>>year_published;
		}
		void putdata_t()
		{
			cout<<"Number of pages: "<<num_of_pages<<endl;
			cout<<"Year Published: "<<year_published<<endl;
		}
};
int main()
{
	third t[3];
	for(int i=0;i<3;i++)
	{
		t[i].getdata();
		t[i].getdata_s();
		t[i].getdata_t();
		}
		for(int i=0;i<3;i++)
		{
			t[i].putdata();
			t[i].showdata();
			t[i].putdata_t();
		}
}
