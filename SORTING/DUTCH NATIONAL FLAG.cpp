//THIS TYPE OF ALGORITHM is used to sort those arrays which 
//contain threee types of sub catogries
#include<bits/stdc++.h>
using namespace std;

void sort(int *arr,int n)
{
	int low = 0,high = n-1,mid = 0;
while(mid <= high)
	{
		if(arr[mid]==0)
		{	swap(arr[low],arr[mid ]);
			low++,mid++;
		}
		else if(arr[mid]==1)
			mid++;
		else
		{
			swap(arr[mid],arr[high]);
			high--;
		}
	}
}
void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int main()
{
init_code();
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
sort(arr,n);
for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
