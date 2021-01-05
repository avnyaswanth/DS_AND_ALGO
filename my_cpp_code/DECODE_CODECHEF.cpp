#include<iostream>
using namespace std;
#define lli long long int
#include<vector>

//  a b c d e f g h  &  i j k l m n o p
// 0   			  7		8			  15

int main()
{
	lli t,n;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>n; 
		cin>>s;
		char letters[16];
		
		for(int i=0;i<16;i++)
			letters[i] = 97 + i; 
		
		int start = 0,end = 15,count = 16;
		
		vector<char> ans;
	
		for(lli i=0;i<n;i+= 4)
		{
			
			count = 16;
			start = 0,end = 15;
			
			for(lli j=i;j<i+4;j++)
			{
				if(s[j]=='1')
					start = start + count/2;
				else
			 		end = end - count/2;
			 		
				count = count/2;
			}
			
			ans.push_back(letters[start]);
		}
		
		for(int i=0;i<ans.size();i++)
			cout<<ans[i];
		
		cout<<endl;
	}
}
