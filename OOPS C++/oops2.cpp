#include<iostream>
#include<string>
using namespace std;
class Humanbeing {
    public:
    string name;

    void introduce(){
        cout<<"hi i am"<<" "<<name<<endl;
    }

}; 

int main(){
    Humanbeing geetesh;
    Humanbeing gudiya;

    geetesh.name = "geetesh";
    geetesh.introduce() ;

    gudiya.name="gudiya";
    gudiya.introduce();

    return 0;
}