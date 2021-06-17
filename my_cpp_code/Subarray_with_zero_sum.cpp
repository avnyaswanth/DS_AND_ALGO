bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> us;
        int sum = 0;
        for(int i=0;i<n;++i)
        {
            if(arr[i] == 0)
            return true;
            sum += arr[i];
            if(sum == 0 || us.find(sum)!=us.end())
            return true;
            us.insert(sum);
        }
        return false;
    }
