#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

void countsetbit(int n)
{
	static int count = 0;
	while(n!=0)
	{
		n = n&(n-1);
		count++;
	}
	cout<< count<<endl;
}
int main(){
	init_code();
countsetbit(5);
}
