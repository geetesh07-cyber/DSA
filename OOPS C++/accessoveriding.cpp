#include<iostream>
using namespace std;
class Person{
    int a;
    public :
    void introduce (){
        cout<<"hii i am person"<<endl;
    }

};
//I think there are two methods for protected inheritance both r shown
class student : protected Person{
    public:
    void introduce (){
        cout<<"hii i am person and student "<<endl;
        Person::introduce();
    }
    void realintroduce (Person p) {
        p.introduce();

    }
};
int main(){
    student anil;
    anil.introduce();
 //   anil.Person::introduce();
    return 0;
}
