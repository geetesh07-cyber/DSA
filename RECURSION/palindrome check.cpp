#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

bool check(string str,int i,int n )
{
if(i==n||i==n+1) return true;
else
	return (str[i]==str[n]) & check(str,i+1,n-1);

}
int main(){
	init_code();
	string str;
	cin>>str;
	int n = str.length()-1;
	int i = 0;
	cout<<check(str,i,n)<<endl;
}
