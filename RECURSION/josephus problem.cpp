#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int joi(int n,int k)
{
	if(n == 0){
		return 0;
	}
	return (joi(n-1,k)+k)%n;
}
int myjoi(int n,int k)
{
	return joi(n,k) +1;
}
int main(){
	init_code();
	cout<<myjoi(7,3);
}
