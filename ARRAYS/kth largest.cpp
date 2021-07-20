#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int secondlargest(int *arr,int n)
{
	int largest = 0,secondlargest = 0;
	for(int i=1;i<n;i++ )
		if(arr[i]>arr[largest])
		{
			int temp = largest;
			largest = i;
			secondlargest = temp;
		}
		return secondlargest;
}

int main()
{
init_code();
int arr[] = {0,3,4,5,67,1};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<secondlargest(arr,n);

}
