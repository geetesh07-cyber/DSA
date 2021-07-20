#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
void find(int n)
{
	n = (n & ~(n-1));
	cout<<(log2(n)+1);
	//time complexity is O(1) and auxilary space is O(1);
}
//my method
void my(int n)
{
	for(int i=0;i<n;i++)
	{
		if((n&(1<<i))!=0)
			cout<<i+1<<endl;
		break;
	}
	//time complexity is 0(log n) and auxillary space is o(1);
}
int main(){
	//init_code();
	int n;
	cin>>n;
	my(n);
	find(n);
}
//101