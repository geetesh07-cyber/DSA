#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
void wavesort(int *arr,int n)
{
	for(int i=0;i<n-1;i=i+2)
		swap(arr[i],arr[i+1]);
}
int main()
{
init_code();
int arr[] = {1,2,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
wavesort(arr,n);
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}
