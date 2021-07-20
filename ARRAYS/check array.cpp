#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

bool check(int *arr,int n)
{
	for(int i=1;i<n;i++)
		if(arr[i-1]>arr[i])
			return false;
		
			return true;

}
int main()
{
init_code();

int arr[] = {1,2,34,344};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<check(arr,n);
}
