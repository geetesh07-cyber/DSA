#include<bits/stdc++.h>
using namespace std;

void init_code(){
	//int fast_io;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
bool prime(int n){
	if(n==1) 
		return false;
	if(n==2||n==3)
		return true;
	if(n%2==0||n%3==0)
		return false;
	for(int i=5;i*i<=n;i=i+6){
		if(n%i==0||n%(i+2==0))
			return false;
		
	}
	return true;
}
int main(){
	init_code();
	int n1;
	cin>>n1;
	cout<<prime(n1);
}
