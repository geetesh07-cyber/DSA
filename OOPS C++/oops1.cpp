#include<iostream>
using namespace std;
//classes are datatypes and objects are variables
class Humanbeing{
    public : 
    void display() {
        cout<<"hello i am a human being"<<endl;
    }
    void speaking() {
        cout<<"I CAN SPEAK"<<endl;
    }
    void walking() {
        cout<<"I can walk also";
    };
};
// This is with dynamic memory allocation;
int main(){
    Humanbeing *geetesh = new Humanbeing();
    
    geetesh->display();
    geetesh->speaking() ;
    geetesh->walking();
    return 0;
}