#include<bits/stdc++.h>
#include<numeric>
using namespace std;

void init_code(){
	//int fast_io;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int gcd(int a ,int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int lcm(int a,int b){
	int lcm = (a*b/gcd(a,b));
	return lcm;
}
int main(){
	init_code();
	int n1, n2;
	cin>>n1>>n2;
	cout<<lcm(n1,n2);
}
//TIME COMPLEXITY OF LCM FUNCTION IS LOG(mln(a,b)) 