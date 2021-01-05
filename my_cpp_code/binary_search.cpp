 #include<iostream>
 using namespace std;
 void sort(int *arr,int n)
 {
 	int temp;
 	for(int i=0;i<n-1;i++)
 	{
 		for(int j=0;j<n-i-1;j++)
 		{
 			if(arr[j]>arr[j+1])
 			{
 				temp = arr[j];
 				arr[j] = arr[j+1];
 				arr[j+1] = temp;
			 }
		 }
	 }
 }
 int binary_search(int *arr,int key,int n)
 {
 	int l = 0;
 	int r = n-1;
 	int mid;
 	while(l<=r)
 	{
 		mid = (l+r)/2;
 		if(key==arr[mid])
 		return mid;
 		if(key>arr[mid])
 			l = mid+1;
		 else
		 	r = mid-1;
	 }
	 return -1;
 }
 int main()
 {
 	 int n;
 	 cin>>n;
 	 int arr[n];
 	 for(int i=0;i<n;i++)
 	 cin>>arr[i];
 	 int ele,x;
 	 cout<<"Enter ele to search";
 	 cin>>ele;
 	 sort(arr,n);
 	 x = binary_search(arr,ele,n);
 	 if(x==-1)
 	 cout<<"key not found";
 	 else
 	 cout<<"key found"<<arr[x];
 }
