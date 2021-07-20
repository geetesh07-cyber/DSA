#include<bits/stdc++.h>
using namespace std;

void init_code(){
	//int fast_io;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int factorial(int n ){
			int result = 1;

	for(int i=2;i<=n;i++){
	result = result * i;}
return result;
//time is theta (n);and auxilary space is theta (1);
}//iterative soloution

// recursive soloution 
int recursive(int n){
if(n==0){
return 1;
}
	return  n*recursive(n-1);
	//time is t(n) = t(n-1) + theta(1);and auxilaary space is theta(n);
}
int main(){
	init_code();
	cout<<recursive(5);
}
