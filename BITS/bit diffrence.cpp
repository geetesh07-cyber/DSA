#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int bitdiffrence(int n,int m)
{
	static int count =0;
	int xor_value = n ^ m;
	while(xor_value!=0){
		xor_value = xor_value & (xor_value-1);
		count++;
	}
	return count;
}
int main(){
	init_code();
cout<<bitdiffrence(20,25);
}
