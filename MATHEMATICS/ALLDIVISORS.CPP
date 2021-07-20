#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

//	naive soloution
void printdivisors(int n)
{
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
		}
	}
	//time is theta(n)''
}
//modifedsoloutioin
void printdivisors1(int n){
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			cout<<i<<" "<<n/i<<" ";
		}
	}
	//the problem is that the numbers are not sorted
}
//modified soloution with soloutions in ascending order
void printdivisors2(int n)
{
	int i;
	for(i=1;i*i<n;i++)
		if(n%i==0) cout<<i<<" ";
	for( ;i>=1;i--)
		if(n%i==0) cout<<n/i<<" ";
}//time complexity of given function is theta(sqrt(n))
int main(){
	init_code();
	int n;
	cin>>n;
	printdivisors2(n);
}
