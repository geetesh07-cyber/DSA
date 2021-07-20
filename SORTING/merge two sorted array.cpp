#include<bits/stdc++.h>
using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

void merge(int *first,int n,int *second,int m)
{
	int i=0,j=0;
	while(i<n&&j<m)
	{
	if(first[i]<second[j])
	{
		cout<<first[i]<<" ";
		i += 1;
	}
	else
	{
		cout<<second[j]<<" ";
		j += 1;
	}
}
while(i<n) {
	cout<<first[i]<<" ";
	i++;
}
while(j<m)
{
	cout<<second[j]<<" ";
	j++;
}
}
int main()
{
init_code();
int n;
cin>>n;
int first[n];
for(int i=0;i<n;i++)
cin>>first[i];
int m;
cin>>m;
int second[m];
for(int i=0;i<n;i++)
cin>>second[i];
merge(first,n,second,m);
}
