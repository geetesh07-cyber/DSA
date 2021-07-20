#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int max(int a,int b,int c){
	if(a>=b&&a>=c) return a;
	else if (b>=a&&b>=c) return b;
	else return c;
}
int maxpieces(int length,int f,int s,int t)
{
	if(length == 0) return 0;
	if(length < 0) return -1;

	int res = max(maxpieces(length-f,f,s,t),maxpieces(length-s,f,s,t),maxpieces(length-t,f,s,t));
     if(res == -1)
     	return -1;

    return res+1;
}
int main(){
	init_code();
	int length,f,s,t;
	cin>>length>>f>>s>>t;
	cout<<maxpieces(length,f,s,t);
}
