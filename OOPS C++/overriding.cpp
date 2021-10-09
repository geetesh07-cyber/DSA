#include<iostream>
using namespace std;
class Person{
    public :
    Person() {
        cout<<"ok the anyhow the constructor will be caled"<<endl; 
    }
    void introduce (){
        cout<<"hii i am person"<<endl;
    }
};
class student : public Person{
    public:
    void introduce (){
        cout<<"hii i am person and student "<<endl;
        Person::introduce();
    }
};
int main(){
    student anil;
    anil.introduce();
    anil.Person::introduce();

    return 0;
}