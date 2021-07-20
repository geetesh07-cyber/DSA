#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int binary(int *arr,int n,int element)
{
	int s =0;
	int e = n-1;
	while(s<=e)
	{
	int mid = (s+(e-s)/2);

	if(arr[mid]==element)
	{
		return mid;
	}
	 if(arr[mid]<element)
	{
		s = mid + 1;
	}
	else 
	{
		e = mid - 1;
	}
}
return -1;
}
int main()
{
//init_code();
int arr[] = {1,2,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
int element = 3;
cout<<binary(arr,n,element);
}