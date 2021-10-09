#include<iostream>
using namespace std;
class person{
    public:
    string name;

    class adress{
        public :
        string country;
        string stname;
        int hno;
    };
    adress addr;
    void adressplease(){
        cout<<name<<endl<<addr.country<<endl<<addr.stname<<endl<<addr.hno<<endl;

    }
};
int main(){
    person anil;
    anil.name = "anil";
    anil.addr.country="india";
    anil.addr.stname="madamakki";
    anil.addr.hno=20;
    anil.adressplease();
    return 0;
}