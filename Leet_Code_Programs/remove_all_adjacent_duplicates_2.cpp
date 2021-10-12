// Recursively removing k adjacent duplicates

string removeDuplicates(string s, int k) {
        int n = s.length();
        if( n <= 1)
            return s;
        stack<pair<char,int>> stk;
        stk.push({s[0],1});
        int dupsize = 0;
        for(int i=1;i<n;++i)
        {
            if(stk.empty())
                stk.push({s[i],1});
            else if(stk.top().second == k-1 && stk.top().first == s[i])
            {
                int freq = k-1;
                while(freq--)
                    stk.pop();
            }
            else
            {
                char ch = stk.top().first;
                int count = 0;
                if(ch == s[i])
                {
                    count = stk.top().second;
                }
                stk.push({s[i],count+1});
            }
        }
        string ans = "";
        while(!stk.empty())
        {
            char ch = stk.top().first;
            stk.pop();
            ans.push_back(ch);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
