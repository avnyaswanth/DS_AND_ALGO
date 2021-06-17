// Question Link : https://www.hackerrank.com/contests/hackwithcareercafe-2/challenges/hack-the-carrercafe-1

#include<bits/stdc++.h>
using namespace std;

bool canbeat(int n,int d,int arr[])
{
    sort(arr,arr+n);
    
    int max_ele = arr[n-1],min_ele = arr[0];
    
    if(min_ele > d || (max_ele > d && (arr[0] + arr[1]) > d))
        return false;
    
    return true;
        
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        scanf("%d%d",&n,&d);
        int *arr = new int[n];
        for(int i=0;i<n;++i)
            scanf("%d",&arr[i]);
        canbeat(n,d,arr) == 1 ? cout<<"YES\n" : cout<<"NO\n";
    }
}
