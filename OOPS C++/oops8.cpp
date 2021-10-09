#include<iostream>
using namespace std;
class Human{
    private:
    string name;
    int age;
    public:
    Human(){
        cout<<"default constructor"<<endl;
    name = "no name";
    age = 0;
    }
    Human(string iname,int iage = 0){
cout<<"overload constructor"<<endl;
    name = iname;
    age = iage;
    }
void speakup(){
    cout<<name<<endl<<age;
}

};

int main(){
   // Human geetesh("geetesh",24);
   // Human geetesh("geetsh");
    Human geetesh;
   geetesh.speakup();
    return 0;
}