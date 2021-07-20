#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
bool prime(int n){
	if(n==1) 
		return false;
	if(n==2||n==3)
		return true;
	if(n%2==0||n%3==0)
		return false;
	for(int i=5;i*i<=n;i=i+6){
		if(n%i==0||n%(i+2==0))
			return false;
		
	}
	return true;
}
 
void allprimes(int n)
{
	vector <bool> isprime(n+1,1);
	for(int i=2;i<=n;i++)
		if(prime(i))
		{
			cout<<i<<" ";
			for(int j=i*i;j<=n;j=j+i)
isprime[i] = 0;
		}
}
int main(){
	init_code();
	int n;
	cin>>n;
	allprimes(n);
}
