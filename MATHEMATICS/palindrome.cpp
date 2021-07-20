#include<iostream>
using namespace std;
int reversenumber(int n){
int reverse =0;
while(n!=0){
    int lastdigit = n%10;
    reverse = reverse*10 + lastdigit;
    n = n/10;
}
return reverse;
}
int main(){
    int n;
    cin>>n;
    if (n == reversenumber(n)){
cout<<"PALINDROME";}
else
cout<<" not ";
    return 0;
//can also do it by a bool function;
}