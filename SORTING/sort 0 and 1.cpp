#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

void partition(int *arr,int n)
{
	int i= -1,j =n;
	while(true)
	{
		do{
			i++;
		}while(arr[i]==0);
		do{
			j--;
		}while(arr[j]==1);
		if(i>=j)
			return ;
		swap(arr[i],arr[j]);
	}
}
int main()
{
init_code();
int arr[] = {1,0,1,1,1,1,0,0};
int n = sizeof(arr)/sizeof(arr[0]);
partition(arr,n);
for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
