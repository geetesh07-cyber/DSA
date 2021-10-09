#include<iostream>
using namespace std;

void studentlist();

int main(){
    studentlist();
   // student anjali;
    return 0;
}


void studentlist(){
    class student{
    public:
    string name;
int age;
void display(){
    cout<<name<<endl<<age<<endl;
}
    };
    student anil;
    anil.name="anil";
    anil.age=24;
    anil.display();
}