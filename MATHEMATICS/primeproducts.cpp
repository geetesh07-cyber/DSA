#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
void printprimefactors(int n){
	if(n<=1) return;
	while(n%2==0)
	{
		cout<<"2"<<" ";
		n = n/2;
	}
	while(n%3==0)
	{
		cout<<"3"<<" ";
		n = n/3;
	}
	for(int i=5;i*i<=n;i++)
	{
		while(n%i==0){
			cout<<i<<" ";
			n = n/i;
		}
		while(n%(i+2)==0)
		{
			cout<<i+2<<" ";
			n= n/(i+2);
		}
	}
	if(n>3)
		cout<<n;
}
int main(){
	init_code();
	int n;
	cin>>n;
	printprimefactors(n);
}
//TIME COMPLEXITY IS  THETA(sqrt(n))