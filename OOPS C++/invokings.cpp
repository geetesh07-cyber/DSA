#include<iostream>
#include<string>
using namespace std;
class person{
    private:
    public:
    void inntroduce(){
        cout<<"hey from perosn"<<endl;
    }
};
    class student : public person{
public:
    void inntroduce(){
cout<<"hey from student"<<endl;}
    void whosthls(person p){
        p.inntroduce();
        person::inntroduce();
    }
    };
int main(){
    student anil;
    anil.inntroduce();
    anil.whosthls(anil);
    return 0;
}