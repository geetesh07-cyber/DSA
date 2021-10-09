#include<iostream>
using namespace std;
class Human{
    public:
    Human(){
        cout<<"consyructer called"<<endl;
    }

    ~Human(){
        cout<<"destructor called"<<endl;
    }
};

int main(){
    Human *geetesh , gudiya;
    geetesh = new Human();
    delete geetesh;
  //  Human gudiya;
   // delete gudiya;//whycan not we directly delete a variable ?
  // I got answer to the above ques. because if we write directly then destructor is called automatically.

    return 0;
}