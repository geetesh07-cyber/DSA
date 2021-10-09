#include<iostream>
using namespace std;
// this is for declaring objects by diffrent method
class Human {
    public:
    string name;
    void introduce(){
        cout<<"hi "<<name<<endl;
    }
};
int main(){
     Human geetesh;
     
     Human *bunty = new Human();
     bunty ->name = "bunty";
     bunty ->introduce () ;
     geetesh.name = "geetesh";
     geetesh.introduce() ;
     bunty->introduce();

    return 0;
}