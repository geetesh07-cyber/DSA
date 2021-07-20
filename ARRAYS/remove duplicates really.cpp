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
	int temp[n];
	int count = 0;
	temp[count++] = arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[i-1])
	
	{
		temp[count] = arr[i];
		count++;
	}
}
 n = count;
for(int i=0;i<n;i++)
{
	arr[i] = temp[i];
    cout<<arr[i]<<" ";
}
}
int main()
{
init_code();
int arr[] = {10,20,20,30,30};
int n = sizeof(arr)/sizeof(arr[0]);
remove(arr,n);
}
