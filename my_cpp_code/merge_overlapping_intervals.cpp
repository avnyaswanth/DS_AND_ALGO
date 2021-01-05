#include<iostream>
#include<typeinfo>
using namespace std;
#include<vector>
#include<algorithm>

void mergeintervals(vector<vector<int>> intervals)
{
	sort(intervals.begin(),intervals.end());
	int n = intervals.size();
	int x = 0;
	for(int i=1;i<n;i++)
	{
		if(intervals[i][0]<=intervals[x][1])
		{
			intervals[x][1] = max(intervals[x][1],intervals[i][1]);
		}
		else
		{
			++x;
			intervals[x] = intervals[i];
		}
	}
	cout<<"{";
	for(int i=0;i<=x;i++)
	{
		cout<<"["<<intervals[i][0]<<","<<intervals[i][1]<<"]"<<'\t';
	}
	cout<<"}";
}
int main()
{
	int n;
	cout<<"enter number of intervals";
	cin>>n;
	vector<vector<int>> intervals;
	int start = 0,end = 0;
	for(int i = 0;i<n;i++)
	{
		vector<int> v;

		cout<<"Enter start and end of the interval";
		cin>>start>>end;
	//	cout<<typeid(start).name()<<endl;
	//	cout<<start<<ends<<end<<endl;
	//	cout<<typeid(v).name()<<endl;
		v.push_back(start);
		v.push_back(end);
		intervals.push_back(v);
	//	cout<<typeid(intervals).name()<<endl;
	//	cout<<intervals.back()[0]<<intervals.back()[1]<<endl;
	}	
	cout<<"Before merge : ";
	cout<<"{";
//	for(int i=0;i<n;i++)
//	{
//		cout<<"["<<intervals[i][0]<<intervals[i][1]<<"]"<<'\t';
//	}
//	cout<<"}";
	mergeintervals(intervals);
}
