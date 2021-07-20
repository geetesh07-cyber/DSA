#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int fib(int n)
{
	if(n==0||n==1)
		return n;
    return (fib(n-1)+fib(n-2));
}
int main()
{
init_code();
int n;
cin>>n;
cout<<fib(n);
}
 