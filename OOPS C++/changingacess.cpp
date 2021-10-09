#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    public:
    void setname(string iname){
        name = iname;
    }

};
class student : private Person{
    public:
  using  Person ::  name  ;//or we can simply write Person :: name but simply writing might ot be su
  //supported in future;
    void display(){
        cout<<name<<endl;
    }
    void studentsetname (string iname){
        setname(iname);
    }
};
int main(){
    student geetesh;
    geetesh.name= "geetesh";
  //  geetesh.studentsetname("hli");
    geetesh.display();
    return 0;
}