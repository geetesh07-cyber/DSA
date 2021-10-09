#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    void setname (string iname) 
    {name = iname;}
    void setage (int iage) {age = iage;}
};
class student : public  Person{
public:
int id;
void setid(int iid) {id = iid;}

void introdice (){
    cout<<"hi am"<<name<<"and i am "<<age<<"years old"<<"and my student id is"<<id<<endl;}
};
int main(){
    student geetesh;
    geetesh.setid(56);
    geetesh.setname("gsetesh");
    geetesh.setage(17);
    geetesh.introdice();
    
    return 0;
}