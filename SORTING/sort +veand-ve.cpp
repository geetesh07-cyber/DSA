#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

void partition(int *arr,int n)
{
	int low = -1,high = n;
	while(true)
	{
		do{
			low++;
		}while(arr[low]<0);
		do{
			high--;
		}while(arr[high]>=0);
		if(low>=high)
			return;
		swap(arr[low],arr[high]);
	}
}
int main()
{
init_code();

int arr[] = {-1,-3,45,78,56,-2};
int n = sizeof(arr)/sizeof(arr[0]);
partition(arr,n);
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}
