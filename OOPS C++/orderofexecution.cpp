#include<iostream>
using namespace std;
class Person{
    public:
    Person(){
        cout<<"constructor is called of main"<<endl;
    }
};
class Student : public Person{
    public:
Student (){
    cout<<"this is a constructor of deriveed class";
}
};
int main(){
    Student geetesh;

    return 0;
}