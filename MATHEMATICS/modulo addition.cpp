#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int mod(int a,int m)
{
	return (a%m + m)%m;
}
void moduleoadditon(int a,int b)
{

}
int main(){
	init_code();
	cout<<mod(10^9+7);
}
