#include<iostream>
using namespace std;
// private things are not private
//it's just for computer and not for human

class Human{
    private:
    int age;
    int getage(){
        return age-2;
    }
    public:

    void callage(int value){
        age = value;
        cout<<value<<endl;
        //or by getage function
        cout<<getage()<<endl;
    }
    
};

int main(){
    Human geetesh;
    geetesh.callage(34);

    return 0;
}