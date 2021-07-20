#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

void remove(int *arr,int n)
{
	int res = 1;
	for(int i=1;i<n;i++)
		if(arr[i]!=arr[i-1]){
			arr[res] = arr[i];
			res++;
		}
}
int main()
{
init_code();
int arr[] = {10,20,20,30,30,30};
int n = sizeof(arr)/sizeof(arr[0]);
remove(arr,n);
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}
