#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

void subset(string str,int index=0,string curr = " ")
{
	int n = str.length();
	if (index == n){
		cout<<curr<<endl;
		return;
	}
	subset(str,index+1,curr);
    subset(str,index+1,curr + str[index]);
}
int main(){
	init_code();
	string str ;
	cin>>str;
	subset(str);
	return 0;
}
