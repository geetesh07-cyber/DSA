#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

void quicksort(int *arr,int n)
{
	for(int i=0;i<n-1;i++)
   {
   	bool swapeed = 0;
   	for(int j=0;j<n-1;j++)
   	{
   		if(arr[j]>arr[j+1])
   			swap(arr[j],arr[j+1]);
   		swapeed = 1;

   	}
   	if(swapeed == 0)
   		break;
   }
}
int main()
{
init_code();
int arr[] = {1,2,3,4,5,6,7,8,9,10};
int n = sizeof(arr)/sizeof(arr[0]);
quicksort(arr,n);
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}
