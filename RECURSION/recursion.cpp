#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
void permutations(string str,int i=0)
{
if(i==str.length()-1)
{
 cout<<str<<endl;
return;
}
for(int j=i;j<str.length();j++)
{
	swap(str[i],str[j]);
	permutations(str,i+1);
	swap(str[i],str[j]);	
}
}
int main()
{
	init_code();
	string str;
	cin>>str;
permutations(str);
}
