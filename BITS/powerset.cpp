#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
void powerseet(int *arr ,int n)
{
	for(int i=0;i<(1<<n);i++)
	{
		for(int j=0;j<n;j++)
		{
			if((i&(1<<j))!=0)
				cout<<arr[j]<<" ";
		}
         cout<<endl;
	}
}
int main(){
	init_code();
int arr[] = {1,2,3,4};
int n = sizeof(arr)/sizeof(arr[0]);
powerseet(arr,n);
}
