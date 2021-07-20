#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int main()
{
init_code();
vector<char> v(10);
vector<char>::iterator p;
p = v.begin();
unsigned int i;
for(i=0;i<10;i++) v[i] = i+'a';
cout<<"CURRENT CONTENTS :- "<<endl;
for(i=0;i<10;i++) cout<<v[i]<<" ";
cout<<"\n\n";
for(int i=0;i<10;i++) v.push_back(i+10+'a');
cout<<v.size()<<endl;
for(int i=0;i<20;i++) cout<<v[i]<<" ";
cout<<"\n\n";
for(int i=00;i<v.size();i++) v[i] = toupper(v[i]);
cout<<"MODIFIIEIDD CONTENTS"<<endl;
for(i=0;i<v.size();i++) cout<<v[i]<<" ";
cout<<endl;
v.push_back('z');
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
v[20] = v[20]-32;
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
cout<<"\n\n";
while(p != v.end())
{
	cout<<*p+'<<" ";
	p++;
}
}
