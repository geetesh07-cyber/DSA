#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int power(int a,int b){
	while(b!=1){
		a *= a;
		b--;
	}
	return a;
}
void roots(int a ,int b,int c)
{
	int  d = b*b - 4*a*c;
	if(d==0){
		cout<< ((-b + sqrt(d))/(2*a))<<endl;
		cout<<"THE ROOTS ARE EQUAL AND POSITIVE";
	}
	else if(d>0){
		cout<< (-b + sqrt(d))/(2*a)<<" "<<(-b - sqrt(d))/(2*a)<<endl;
		cout<<"THE ROOTS ARE DISTINCT  AND POSITIVE";
	}
else{
	cout<<(-b/2 * a)<<endl;
	cout<<sqrt(-d)/(2*a)<<endl;
cout<<"THE ROOTS ARE NEGATIVE AND DISTINCT";

}
}
int main(){
	init_code();
	int a,b,c;
	cin>>a>>b>>c;
	roots(a,b,c);
}
