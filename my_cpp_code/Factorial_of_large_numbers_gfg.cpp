vector<int> factorial(int num){
        vector<int> ans;
        ans.push_back(1);
        for(size_t i=2;i<=num;++i)
        {
            int carry = 0;
            for(int j=0;j<ans.size();++j)
            {
                int prod = carry + ans[j]*i;
                carry = prod/10;
                ans[j] = prod % 10;
            }
            
            while(carry)
            {
                ans.push_back(carry%10);
                carry /= 10;
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
}
