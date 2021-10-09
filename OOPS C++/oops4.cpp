#include<iostream>
using namespace std;
//this is for declaring functions outside loop
class Human {
    public:
    string name;
    void introduce();
    void go();

};

void Human ::introduce () {

    cout<<name <<endl;
}
void Human :: go () {
    cout<<Human ::name<<endl;
}

int main(){
    Human geetesh;
    geetesh.name = "geetesh";
    geetesh.introduce();
    geetesh.go();
    return 0;
}