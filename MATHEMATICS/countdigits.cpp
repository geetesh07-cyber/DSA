#include<bits/stdc++.h>
using namespace std;

void init_code(){
	//int fast_io;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int digits(int n){
	static int count = 0;

	while(n!=0){
		n = n/10;
		count++;
	}
return count;
}
int main(){
	init_code();
	int n;
	cin>>n;
	cout<<digits(n);
}
//time complexity is theta(n) ehre n is the no. of digits