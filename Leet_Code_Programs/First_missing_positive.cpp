int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;++i)
        {
            if(nums[i] <= 0)
                nums[i] = INT_MAX;
        }
        for(int i=0;i<n;++i)
        {
            if(nums[i]!=0 && abs(nums[i])-1 < n && nums[abs(nums[i])-1] > 0)
                nums[abs(nums[i])-1] *= -1;
        }
        for(int i=0;i<n;++i)
        {
            if(nums[i] > 0)
                return i+1;
        }
        return n+1;
}
