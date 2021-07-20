#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int binarysearch(int *arr,int n,int x)
{
	int low =0,high= n-1;
	while(low<=high)
	{
		int mid = (low + high)/2;
		if(arr[mid]==x)
			return mid;
		else if(arr[mid]>x)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}
int main()
{
init_code();
int arr[] = {100,47,78,56,3495};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<binarysearch(arr,n,78);


}
