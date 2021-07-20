#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int maxdiffrence(int *arr,int n)
{
	int res = arr[1] - arr[0];
   int min_val = arr[0];
   	for(int j=1;j<n;j++)
   	{
   		res = max(res,arr[j]-min_val);
   		min_val = min(min_val,arr[j]);
   	}
   	return res;
}
int main()
{
init_code();
int arr[] = {2,3,10,6,4,8,1};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<maxdiffrence(arr,n);
}
