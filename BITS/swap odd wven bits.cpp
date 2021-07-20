#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
unsigned int  swapbits(unsigned int n)
{
	unsigned int even_bits = n & 0*AAAAAAAA;
unsigned	int odd_bits = n & 0*55555555;
even_bits >>= 1;
odd_bits <<= 1;
return(even_bits|odd_bits);
}
int main(){
	init_code();
	unsigned int n;
	cin>>n;
	cout<<swapbits(n);
}
