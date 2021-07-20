#include<bits/stdc++.h>
using namespace std;

void init_code(){
	//int fast_io;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
//GIVEN A NUMBER WE HAVE TO COUNT THE NO. OF TRAILING ZEROS IN IT'S FACTORIAL
/*int trailzeros(int n){
	int result = 1;
	for(int i=2;i<=n;i++)
		result =  result*i;
	static int i = 0;
	while(result % 10==0){
i++;
result = result/ 10;
	}
	return i;
	//time complexity should be theta(n);
}*/
//it is not a good method 
int counttrailingzeroes(int n)
{
	int res = 0;
	for(int i =5;i<=n;i = i*5)
		res = res + n/i;
	return res;
}

int factorial(int n)
{
	int res =1;
	for(int i=2;i<=n;i++)
		res = res* i;
		static int count = 0;

	for(int i =5;i<=res;i = i*5){
		count = count + res/i;
	}
	return count;
}
int main(){
	init_code();
	int n;
	cin>>n;
//cout<<factorial(n);
cout<<counttrailingzeroes(100);
}
