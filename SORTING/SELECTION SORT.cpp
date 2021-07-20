#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

void selectionsort(int *arr,int n)
{
	int i,j;
	for(int i=0;i<n;i++)
	{
		int min_ind = i;
		for(int j=i+1;j<n;j++)
			if(arr[j]<arr[min_ind])
				min_ind = j;
			swap(arr[i],arr[min_ind]);
	}

}
int main()
{
init_code();
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
selectionsort(arr,n);
for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
