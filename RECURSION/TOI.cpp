#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
void toi(int n,char source_tower,char auxilary_tower,char target_tower)
{
	if(n==1){
		cout<<"MOVE "<<n<<" from "<<source_tower<<" to "<<target_tower<<endl;
		return;
	}
	toi(n-1,source_tower,target_tower,auxilary_tower);
	cout<<"MOVE "<<n<<" from "<<source_tower<<" to "<<target_tower<<endl;
	toi(n-1,auxilary_tower,source_tower,target_tower);

}
int main(){
	init_code();
	int n;
	cin>>n;
toi(n,'a','b','c');
}
