#include<iostream>;
using namespace std;

int main()
{
	int a[] = {1,2,3,4,5} , k = 0;
	int b[] = {4,5,6,7,8,9,10};
	int temp = 0;
	int asize = sizeof(a)/sizeof(a[0]);
		int bsize = sizeof(b)/sizeof(b[0]);
		int c[asize+bsize];	
		int x = sizeof(c)/sizeof(c[0]);
			
		for(int i=0;i<asize;i++)
		{
			k = 0;
			for(int j=0;j<bsize;j++)
			{
				if(a[i]==b[j])
				{
					k++;
					break;
				}
			}
			if(!k) c [temp++] = a[i];
		}
			for(int i=0;i<bsize;i++)
			{    
			    k = 0;
				for(int j=0;j<asize;j++)
				{
					if(b[i]==a[j])
					{
						k++;
						break;
					}
				}
				if(!k) c [temp++] = b[i];
			} 
		
		for(int i=0;i<temp;i++)
		cout<<c[i]<<ends;
}
