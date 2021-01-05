#include<stdio.h>
#include<math.h>
#include<float.h>
#include<limits.h>

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int k = (n/2)-1;
	float total_sum =0;
	float S[k];
	int S_values[k][n];
	for(int i=0;i<n;i++)
	total_sum += arr[i];
	int num = n;
	for(int i=1;i<=k;i++)
	{
		num = num - 2;
		total_sum = (total_sum - arr[i-1] - arr[n-i]);
		int x = 0;
		for(int j=i;j<n-i;j++)
			S_values[i-1][x] = arr[j];
		S[i-1] = total_sum/num;
	}
	
	double min_diff = FLT_MAX;
	int s1,s2;
	double diff;
	for(int i=0;i<k-1;i++)
	{
		for(int j=i+1;j<k;j++)
		{
			diff = fabs(S[i]-S[j]);
			if(diff < min_diff)
			{
				min_diff = diff;
				s1 = i;
				s2 = j;
			}
		}
	}
	for(int i=0;i<n-(2*s1+1);i++)
	{
		printf("%d ",S_values[s1][i]);
	}
	printf("\n");
	for(int i=0;i<n-(2*s2+1);i++)
	{
		printf("%d ",S_values[s1][i]);
	}
	
}
