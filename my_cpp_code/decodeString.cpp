#include<iostream>
using namespace std;
#include<algorithm>
#include<string>
#include<stack>
string decodeString(string s) {
        string e_str = "";
        int n = s.length();
        int num =0,ind = 0;
        stack<char> stk;
        int i = n-1;
        while(i>=0)
        {
            
            while(s[i]!='['&&i>=0)
            {
                stk.push(s[i]);
                i--;
            }
            if(s[i]=='[')
            {
                i--;
                num = 0;
                ind = 0;
                while(isdigit(s[i]))
                {
                    int dig = s[i] - '0';
                    num = num + dig * pow(10,ind++);
                    i--;
                }
                while(!stk.empty()&&stk.top()!=']')
                {
                    e_str.push_back(stk.top());
                    stk.pop();
                }
                stk.pop();
                reverse(e_str.begin(),e_str.end());
                int len = e_str.length();
                for(int j=0;j<len*num;j++)
                {
                    stk.push(e_str[ j % len ]);
                }
            }
            e_str = "";
        }
        while(!stk.empty())
        {
            e_str.push_back(stk.top());
            stk.pop();
        }
        cout<<e_str.length()<<endl;
        return e_str;
    }
int main()
{
	string s = "3[z]2[2[y]pq4[2[jk]e1[f]]]ef";
	cout<<decodeString(s);
}
