#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

void leader(int *arr,int n)
{
	int curr = arr[n-1];
	cout<<curr<<" ";
	for(int i=n-2;i>0;i--)
	if(curr<arr[i])
	{
		curr=arr[i];
   cout<<curr<<" ";
}
}
int main()
{
init_code();
int arr[] = {7,10,4,6,3,5,2};
int n = sizeof(arr)/sizeof(arr[0]);
leader(arr,n);

}
