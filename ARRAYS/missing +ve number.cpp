#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int missing(int *arr,int n)
{
	bool present = 0;
	for(int i=0;i<n;i++)
		{if(arr[i]==1)
			present = 1;
		}
		if(present==0)
			return 1;



	for(int i=0;i<n;i++)
	{
		if(arr[i]>1&&arr[i]!=arr[arr[i]-2])
		{
			swap(arr[i],arr[arr[i]-2]);
		}
	}
	for(int i=0;i<n;i++)
		if(arr[i]!=i+2)
			return i+2;
		return -1;

}
int main()
{
init_code();
int arr[] = {1,7,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<missing(arr,n);
}
