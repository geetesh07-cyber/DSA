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
void mergesort(int arr[],int l,int r,int n)
{
	if(r>l)
	{
		int m = l+(r-l)/2;
		mergesort(arr,l,m,n);
		mergesort(arr,m+1,r,n);
		mergefunction(arr,n,l,m,r);
	}
}
int main()
{
init_code();
int arr[] = {5,6,1,2,4,90,0,10,45,34,89,34,56,23,45,590};
int n = sizeof(arr)/sizeof(arr[0]);
mergesort(arr,0,n-1,n);
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}
