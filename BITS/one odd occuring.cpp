#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int findodd(int *arr,int n){
int x = 0;
for(int i=0;i<n;i++)
x = arr[i] ^ x ;
return x;
}
//modificaation of this question
int missingnumber(int *arr,int n)
{
	int x = 0;
	for(int i=1;i<=n+1;i++)
		x = i ^ x;
	for(int i = 0;i<n;i++)
		x = arr[i] ^ x;
	return x;
}
int main(){
	init_code();
	int arr[] = {1,4,3};
	int n = sizeof(arr)/sizeof(arr[0]);
/*	cout<<findodd(arr,n);*/
	cout<<missingnumber(arr,n);
}


