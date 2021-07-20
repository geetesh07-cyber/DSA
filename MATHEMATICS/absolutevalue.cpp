#include<bits/stdc++.h>
using namespace std;

void init_code(){
	//int fast_io;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int absolute(int n){
	if(n<0)
		return -n;
	else{
		return n;
	}
}

int main(){
	init_code();
	int n;
	cin>>n;
cout<<absolute(n);
}
