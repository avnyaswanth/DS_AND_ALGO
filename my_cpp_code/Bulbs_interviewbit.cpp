int Solution::bulbs(vector<int> &arr) {
    int cnt = 0;
    bool flag = 0;
    for(size_t i=0;i<arr.size();i++)
    {
        if(arr[i] == flag)
        {
            cnt++;
            flag = flag ^ 1;
        }
    }
    return cnt;   
}
