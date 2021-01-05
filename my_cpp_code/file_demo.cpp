#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	ofstream fout;                            //  ofstream object used to write inside a file
	fout.open("myfirstcppfile.txt");          //  file opening
	string str;
	int i;
	cin>>i;
	cin.ignore();               //    ignoring the buffer 
	getline(cin,str);
	fout<<i<<str;
	fout.close();
	ifstream fin("myfirstcppfile.txt");    // we can also write like this inorder to open already existed files
	if(fin==0)
	cout<<"File not exist";
	char c;
	int count = 0;
//	fin.open("myfirstcppfile.txt");
	while(!fin.eof())                 //   instead of fin.eof() we can just write fin inside while loop
	{ 
	  c = fin.get();
	  if(c!=-1)     //   end of file is represented by an unknown character having ascii value -1
	   count++;
	}	
	cout<<count<<endl;
	fin.close();
}
