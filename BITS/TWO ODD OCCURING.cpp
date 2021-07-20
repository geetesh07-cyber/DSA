#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

void findthetwo(int *arr,int n)
{
	int x=0,res1=0,res2=0;
	for(int i=0;i<n;i++){
		x = x^arr[i];
	}
	int sn = x & ~(x-1);

	for(int i=0;i<n;i++)
	{
		if((arr[i]&sn)!=0)
			res1 = res1 ^ arr[i];
		else
			res2 = res2 ^ arr[i];
	}
	cout<< res1<<" "<<res2;
	cout<<endl;

}

int main(){
	init_code();
	int arr[] = {3,4,3,4,5,4,4,6,7,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	findthetwo(arr,n);
}
