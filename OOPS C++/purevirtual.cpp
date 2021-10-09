#include<iostream>
using namespace std;
class Person{
    public:
  virtual  void introduce() = 0;
    
};

void Person ::introduce(){
    cout<<"hey from person"<<endl;
}
class student : public Person{
    public :
    void introduce(){
        cout<<"hii i am a student"<<endl;
    Person ::introduce();
    }
};
int main(){
    student anil;
    anil.introduce();
    return 0;
}