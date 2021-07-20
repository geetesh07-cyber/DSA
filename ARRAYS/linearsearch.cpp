#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int linearsearch(int *arr,int n,int element)
{
for(int i=0;i<n;i++)
	if(arr[i] == element)
		return i;
	return -1;
}
int main()
{
init_code();
int arr[] = {1,34,32,32,13,56,55,};
int n = sizeof(arr)/sizeof(arr[0]);
int element = 89;
cout<<linearsearch(arr,n,element);
}
