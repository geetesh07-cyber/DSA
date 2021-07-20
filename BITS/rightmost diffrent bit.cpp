#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

void diffrentbit(int n,int m)
{
int xor_value = n^m;
xor_value = (xor_value & ~(xor_value-1));
cout<<(log2(xor_value))+1<<endl;
}

int main(){
	init_code();
	diffrentbit(2,4);
}
