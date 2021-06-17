// Question link : https://www.hackerrank.com/contests/hackwithcareercafe-2/challenges/common-frequency/problem

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    scanf("%d",&t);
    int n;
    while(t--)
    {
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;++i)
            scanf("%d",&arr[i]);
        unordered_map<int,int> um,cf;
        
        for(auto num : arr)
            um[num]++;
        
        for(auto pr : um)
            cf[pr.second]++;
        
        int commfreq = 0;
        int max = INT_MIN;
        
        for(auto pr : cf)
        {
            if(pr.second > max)
            {
                max = pr.second;
                commfreq = pr.first;
            }
        }
        
        int count = 0;
        
        for(auto pr : cf)
        {
            if(pr.first > commfreq)
               count += pr.second;
        }
        cout<<count<<'\n';
    }
    return 0;
}
