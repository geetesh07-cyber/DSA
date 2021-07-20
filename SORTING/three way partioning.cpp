#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

void partition(int *arr,int n,int ranges,int rangel)
{
int low = 0,mid =0,high = n-1;
while(mid<=high)
{
	if(arr[mid]<ranges)
	{
		swap(arr[mid],arr[low]);
		mid++,low++;

	}
	
	else if(arr[mid]>rangel)
	{
    swap(arr[mid],arr[high]);
    high--;
	}
	else
	{
		mid++;
	}
}

}
int main()
{
init_code();
int arr[] = {10,5,6,3,20,9,30};
int n = sizeof(arr)/sizeof(arr[0]);
partition(arr,n,5,10);
for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
