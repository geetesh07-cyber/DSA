#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
void merge(int arr[],int n,int b[],int m)
{
	int i=0,j=0;
	while(i<n && j<m)
	{
		if(arr[i]<b[j]){cout<<arr[i++]<<" ";}
		else{cout<<b[j++]<<" ";}
	}
	while(i<n) {cout<<arr[i]<<" ";i++;}
	while(j<m) {cout<<b[j]<<" ";j++;}
}
int main()
{
init_code();
int a[] = {1,21,30,41};
int n = sizeof(a)/sizeof(a[0]);
int b[] = {5,16,19,81,90};
int m = sizeof(b)/sizeof(b[0]);
merge(a,n,b,m);
}
