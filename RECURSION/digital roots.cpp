#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int sumofdigits(int n)
{
	if(n<=0) return 0;
	int remainder = n%10;
	return remainder + sumofdigits(n/10);
}

int digitalroots(unsigned long long int n)
{
	if(n/10<=0) return n;
int sum = sumofdigits(n);
return digitalroots(sum);
}
int main()
{
	init_code();
	unsigned long long int n;
	cin>>n;
	cout<<digitalroots(n);
}
