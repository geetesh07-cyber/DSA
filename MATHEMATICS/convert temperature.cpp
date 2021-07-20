#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int convert(int celscius)
{
	int faherneit = (((9/5)*celscius)+32);
	return faherneit;
}
int main(){
	init_code();
	int n;
	cin>>n;
	cout<<convert(n);
}
