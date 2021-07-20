#include<bits/stdc++.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int power(int a,int b)
{
	if(b==0||b==1)
return a;	
else{
		for(int i=1;i<b;i++)
			a *= a;
return a;
	}
}

void term(int firstterm,int secondterm,int nthterm)
{
	if(nthterm==1) cout<<firstterm;
	else if(nthterm==2) cout<<secondterm;
	else{
		int r = secondterm/firstterm;
		cout<<(firstterm*power(r,nthterm-1));
	}
}
int main(){
	init_code();
	int a,b,c;
	cout<<"ENTER THE FIRST TERM"<<endl;
	cin>>a;
	cout<<"ENTER THE SECOND TERM"<<endl;
	cin>>b;
	cout<<"ENTER THE TERM U WANT"<<endl;
	cin>>c;
	cout<<"THE DESIRED TERM IS "<<endl;
	term(a,b,c);
}
