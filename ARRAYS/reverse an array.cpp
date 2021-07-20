#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
void reverse(int *v,int n)
{
	int low=0,high=n-1;
	while(low<high)
	{
		int temp = v[low];
		v[low] = v[high];
		v[high] = temp;
		low++;
		high--;
	}
}
int main()
{
init_code();
int arr[] = {1,2,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
reverse(arr,n);
for(int i=0;i<5;i++)
	cout<<arr[i]<<" ";
}
