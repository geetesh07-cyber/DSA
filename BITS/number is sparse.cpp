#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
bool checksparse(int n)
{
	if((n&(n>>1))==0)
		return true;
	return false;
}
int main(){
	init_code();
	int n;
	cin>>n;
	if(checksparse(n))
		cout<<"it's a sparse  no."<<endl;
	else
		cout<<" it's not a sparse no."<<endl;
}
