#include<bits/stdc++.h>
//#include<vector>
//#include<iterator>
//#include<algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==0||n==1)
            return 0;
    
        int min = prices[0],pro;
        int max = 0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]<min)
                min = prices[i];
             pro = prices[i] - min;
            if(pro>max)
                max = pro;
        }
        return max;
    }
int main()
{
	vector<int> prices;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		prices.push_back(x);
	}
	
	cout<<maxProfit(prices);
}
