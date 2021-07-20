#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
void mergefunction(int *arr,int n,int low,int mid,int high)
{
	int n1 = (mid-low)+1;
	int n2 = (high-mid);
	int left[n1];
	int right[n2];
	for(int i=0;i<n1;i++)
		left[i] = arr[low+i];
for(int i=0;i<n2;i++)
	right[i] = arr[mid+1+i];
int i=0,j=0,k=low;
while(i<n1&&j<n2)
{
	if(left[i]<=right[j]) {arr[k] =left[i];i++;}
	else{arr[k] =right[j];j++;}
	k++;
}
while(i<n1) {arr[k]=left[i];i++;k++;}
while(j<n2){arr[k] = right[j];j++;k++;}
 }
int main()
{
init_code();
int arr[] = {10,12,20,11,30};
int n = sizeof(arr)/sizeof(arr[0]);
int low=0,mid=2,high=4;
mergefunction(arr,n,low,mid,high);
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}
