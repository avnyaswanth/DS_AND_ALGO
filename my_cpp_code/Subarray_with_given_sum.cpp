vector<int> subarraySum(int arr[], int n, int s)
    {
        int temp = 0;
        int cur_sum = 0;
        for(int i=0;i<n;++i)
        {
            cur_sum += arr[i];
            
            while(cur_sum > s)
               cur_sum -= arr[temp++];
               
            if(cur_sum == s)
                return vector<int>({temp+1,i+1});
        }
        return vector<int>({-1});
    }
