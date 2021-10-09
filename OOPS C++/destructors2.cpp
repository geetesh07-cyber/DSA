#include<iostream>
using namespace std;
class Human{
    private:
    string *name;
    int *age;


    public:
    Human(string iname,int iage){
        name= new string;
        age = new int;

        *name = iname;
        *age = iage;
    }
    void display(){
        cout<<" hi i am"<<*name<<"and i am"<<*age<<"yeras old"<<endl;
    }
    ~Human(){
        delete name;
        delete age;
        cout<<"all memories are released"<<endl;
    }

};

int main(){
    Human *geetesh = new Human("geetesh",34);
    geetesh->display();
    delete geetesh;
    return 0;
}