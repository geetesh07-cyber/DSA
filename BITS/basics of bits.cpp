#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

void checkbit(int n,int pos)
{
	if((n&(1<<pos))!=0)
		cout<<"1"<<"\n";
	else
		cout<<"0"<<"\n";//or we can do it by bool
}
void setbit(int n,int pos)
{
	n = n|(1<<pos);
	cout<< n<<endl;
}
void deletebit(int n,int pos)
{
	int x = 1<<pos;
int 	y = ~x;
	cout<<(n&y)<<endl;
}
// SAME WAY WE CAN ALSO buitl a function to replace a bit but
//that's not important as we alreadt know.
int main(){
	init_code();
checkbit(5,1);
setbit(5,1);
deletebit(5,1);
}

