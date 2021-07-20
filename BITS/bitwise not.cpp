#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int main(){
	init_code();
	unsigned int x = 5;
	cout<< (~x)<<endl;
	unsigned int y =1;
	cout<<(~y)<<endl;
	signed int w = 5;
	cout<<(~w)<<endl;
	signed int z = 1;
	cout<<~z<<endl;
	// SO WE CAME TO CONCLUSIN that the not of unsigned int is 2 raise the poweer 32 -1 - that number
	// and for signed bit is -1 - that number 
}
