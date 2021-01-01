 
//  Two sum CPP

vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int x;
        int i,j;
        for(i=0;i<n-1;i++)
        {
            x = target - nums[i];
            auto pos = find(nums.begin()+i+1,nums.end(),x);
            if(pos!=nums.end())
            {
                j = pos - nums.begin();
                break;
            }
        }
        return vector<int>({i,j});
    }