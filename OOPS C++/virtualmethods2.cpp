#include<iostream>
using namespace std;
class Person {
    public :
virtual void introduce(){ //try for not virtual;
    cout<<"HII from person"<<endl;
}
};
class student: public Person{
    public:
    void introduce(){
        cout<<"hii from student"<<endl;
    }
};
class gstudent: public student{
    public :
    void introduce(){
        cout<<"hii from gstudent"<<endl;
    }
};
void  whosthis(Person &p){
p.introduce();
}
int main(){
    Person geetesh;
    student gudiya;
    gstudent anil;
    whosthis(geetesh);
    whosthis(gudiya);
    whosthis(anil);
    return 0;
}