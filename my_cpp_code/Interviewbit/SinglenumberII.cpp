int Solution::singleNumber(const vector<int> &A) {
    int num = 0;
    for(int i=0;i<=31;++i)
    {
        int sum = 0;
        for(int j=0;j<A.size();++j)
            sum += ((A[j] >> i) & 1);
        num += ((sum % 3) << i);
    }
    return num;
}
