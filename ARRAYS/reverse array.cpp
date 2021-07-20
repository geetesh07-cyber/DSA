#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

void reversearay(int *arr,int n)
{
	for(int i=0;i<n/2;i++)
	{
		int temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = temp;
	}

}
int main()
{
init_code();
int arr[] = {0,1,2,3,4,5,6,7,8,9};
int n = sizeof(arr)/sizeof(arr[0]);
reversearay(arr,n);
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}


}
