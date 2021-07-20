#include<bits/stdc++.h>
using namespace std;

void init_code(){
	int fast_io;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int gcd(int a,int b){
	while(a!=b){
		if(a>b)
			a=a-b;
		else
			b = b-a;
	}
	return a;
}
//MODIFIED VERSION OF EUCLID ALGORITHM
int modgcd(int a,int b){
	if(b==0)
		return a;
	else
		return modgcd(b,a%b);
}
int main(){
	init_code();
	int a,b;
	cin>>a>>b;
	cout<<modgcd(a,b);
}
