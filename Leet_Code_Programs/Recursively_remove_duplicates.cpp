// Recursively removing consecutive duplicates (GeeksforGeeks)

#include <bits/stdc++.h>
using namespace std;

string removedups(string s)
{
    int len = s.length();
    if(len <= 1)
        return s;
        
    stack<char> stk;
    string ans = "";
    stk.push(s[0]);
    bool dupspresent = 0;
    
    for(int i=1;i<len;++i)
    {
        if(stk.empty())
            stk.push(s[i]);
        else if(stk.top() == s[i])
        {
            dupspresent = 1;
            stk.push(s[i]);
        }
        else
        {
            if(dupspresent == 1)
            {
                char cur = stk.top();
                while(!stk.empty() && cur == stk.top())
                    stk.pop();
                i = i - 1;
                dupspresent = 0;
            }
            else    // if dups not present and top of stack not equals cur element;   
                stk.push(s[i]);
        }
    }
    char cur = stk.top();
    while(!stk.empty() && cur == stk.top() && dupspresent == 1)
        stk.pop();
    while(!stk.empty())
    {
        char ch = stk.top();
        stk.pop();
        ans.push_back(ch);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main() {
	cout<<removedups("acaaabbbacdddd");
}
