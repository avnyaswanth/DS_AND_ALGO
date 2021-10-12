string removeDuplicates(string s) {
        int len = s.length();
        if(len <= 1)
            return s;
        stack<char> stk;
        string ans = "";
        stk.push(s[0]);
        for(int i=1;i<len;++i)
        {
            if(!stk.empty() &&  stk.top() == s[i])
            {
                stk.pop();
                continue;
            }
            else stk.push(s[i]);
        }
        while(!stk.empty())
        {
            char ch = stk.top();
            stk.pop();
            ans.push_back(ch);
        }
        reverse(ans.begin(),ans.end());
        return ans;
}
