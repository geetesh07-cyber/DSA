#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int distribute(int *arr,int n,int k)
{
sort(arr,arr+n);
int result = INT_MAX ;
for(int i=0;(i+k)-1<n;i++)
{
	int currresult = arr[(i+k)-1]-arr[i];
	result = min(currresult,result);
}
return result;
}
int main()
{
init_code();
int arr[] = {7,3,2,4,9,12,56};
int k = 3;
int n = sizeof(arr)/sizeof(arr[0]);
cout<<distribute(arr,n,k)<<endl;
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}
