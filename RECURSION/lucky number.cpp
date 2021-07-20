#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

bool luckynumber(long long int n)
{
	static int count = 2;
	if(n<count) return true;
	else{
		if(n%count==0)
			return false;
	}
	count++;
	int pos = n - n/count;
	 return luckynumber(pos);
}
int main()
{
init_code();

int n;
cin>>n;
cout<<luckynumber(n);

}
