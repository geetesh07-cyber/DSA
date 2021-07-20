#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int index(int *arr,int n)
{
	int index = 0;
	for(int i=1;i<n;i++)
		if (arr[i]>arr[index])
			index = i;
	return index;
}
int main()
{
init_code();
int arr[] = {1,3,2,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<index(arr,n);
}
