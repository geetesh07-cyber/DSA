#include<iostream>
using namespace std;
class Person {
    protected :
    string name;
    public :
    void setname(string iname){
        name = iname;
    }
    
};
//WE CAN GET TWO TYPES OF INHERITANCE PUBLIC AND PROTSEECTED
    class student  :protected Person{
public:
void getname(){
        cout<<name<<endl;
    }
    void setstudentname(string iname){
        setname(iname);
    }
    };

int main(){
    student geetesh;
   // geetesh.setname("golu");IT IS PROTECTED SO WE HAVE TO USE DIFFTENT METHOD
    geetesh.setstudentname("geetesh");
    geetesh.getname();
    return 0;
}
