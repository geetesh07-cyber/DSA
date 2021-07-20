#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

bool powerof2(int n)
{
	return((n&(n-1))==0);
}
int main(){
	int n;
	cin>>n;
cout<<powerof2(n);
}
