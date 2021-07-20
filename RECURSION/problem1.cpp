#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
void printnumbers(int n){
	if(n==0){
		return ;
}
cout<<n<<" ";
printnumbers(n-1);
}
int main(){
	init_code();
	int n;
	cin>>n;
printnumbers(n);
}
