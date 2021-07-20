#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
void countdigits(int n)
{
	int res = 1;
	for(int i=2;i<=n;i++)
		res = res*i;
	static int count =0;
	while(res!=0){
		res = res/10;
count++;
	}
	cout<<count;
}
int main(){
	init_code();
	int n;
	cin>>n;
	countdigits(n);
}
