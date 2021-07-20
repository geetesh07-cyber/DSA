#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
void printfreq(int *arr,int n)
{
	int freq = 1,i=1;
	while(i<n)
	{
		while(i<n&&arr[i]==arr[i-1])
		{
			freq++;
			i++;
		}
		cout<<arr[i-1]<<" "<<freq<<endl;
		i++;
		freq=1;
	}
	if(n==1||arr[n-1]!=arr[n-2])
		cout<<arr[n-1]+1<<endl;
}
int main()
{
init_code();
int arr[] = {10,10,10,25,30,30,30};
int n = sizeof(arr)/sizeof(arr[0]);
printfreq(arr,n);

}
