#include<iostream>
using namespace std;
class Person{
    public :
 virtual   void introduce (){
        cout<<"hii i am person"<<endl;
    }
};
class student :  public Person{
    public:
    void introduce (){
        cout<<"hii i am person and student "<<endl;
        Person::introduce();
    }
};
class Farmer :  public Person{
    public:
    void introduce (){
        cout<<"hii  i am person and famer"<<endl;

    }
} ;
void whosethis(Person &p){
    p.introduce();
}
int main(){
 //   anil.Person::introduce();
 Farmer anil;
 student alex;
 whosethis(anil);
 whosethis(alex);

    return 0;
}
