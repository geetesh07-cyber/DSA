#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
char words[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
void convert(int n)
{
if(n<=0)
	return ;
convert(n/10);
int word = n%10;
cout<<words[word]<<" ";
}

int main()
{
init_code();
int n;
cin>>n;
convert(n);


}
