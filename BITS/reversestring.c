#include<stdio.h>
#include<string.h>
int main(){
	char s[100] = {"abcd"} ;
	int n = sizeof(s)/sizeof(s[0]);
	for(int i=n-1;i>=0;i--)
		printf("%c", s[i]);
}