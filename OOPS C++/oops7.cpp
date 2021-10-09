#include<iostream>
using namespace std;
class Human{
    private:
    string name;
    int age;
    public:
    Human(){
        cout<<"default constructor"<<endl;
        age = 0;
        name = "no name";
        }
    Human(string iname) {
        cout<<"constructor with name as parameter"<<endl;
        age = 0;
        name= iname;
    }   
    Human(int iage){
        cout<<"cinstructor with age as parameter"<<endl;
        age = iage;
        name = "noname";
    } 

Human(string iname, int  iage){
    cout<<"constuctor with name as well as age as a parameter"<<endl;
    name = iname;
    age = iage;
}


     void display(){
            cout<<name<<endl<<age<<endl;
        }

};

int main(){
     Human geetesh;
     geetesh.display();

     Human andy("andy");
     andy.display();

     Human apple(5);
     apple.display();

     Human banana("banana",8);
     banana.display();
    return 0;
}