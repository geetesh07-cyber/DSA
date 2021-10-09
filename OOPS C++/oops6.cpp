#include<iostream>
using namespace std;
class Human{
    private:
    string name;
    int age;
    public:
    // Constructors can be used to declare the value of private members
    Human(){
        name = "no name";
        age = 0;
        cout<<"constructor is called when u create an object of human"<<endl;
        }
        void display(){
            cout<<name<<endl<<age<<endl;
        }

};

int main(){
    Human geetesh;
    geetesh.display();

    return 0;
}