//#include<iostream>
//#include<vector>
//using namespace std;
//int remove_dup(vector<int> &arr)
//{
//	int ind =0;
//	for(int i=0;i<arr.size();i++)
//	{
//		if(arr[ind]!=arr[i])
//		arr[++ind] = arr[i];
//	}
//	return ind+1;
//}
//int main()
//{
//	vector<int> arr ={1,2,3,3,4,4,5,6};
//	int len = remove_dup(arr);
//	for(int i=0;i<len;i++)
//	{
//		cout<<arr[i]<<ends;
//	}
//}
#include<iostream>
#include<string>
using namespace std;
class RemoveDuplicates
{
	private:
		string str;
		public:
		RemoveDuplicates(string s)
		{
			str = "";
			int i,j;
			for(i=0;i<s.length();i++)
			{
			   for(j=0;j<i;j++)
			   	if(s[i]==s[j])
			   	break;	
			   	if(i==j)
			   	str = str + s[i];
			}
			cout<<str;
		}
};
int main()
{
	string s = "abcde";
	RemoveDuplicates r(s);
}
