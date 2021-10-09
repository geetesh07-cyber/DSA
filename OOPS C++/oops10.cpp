#include<iostream>
#include<string> 
using namespace std;


class Human {
    string name;
    int age;
    public :
    Human(string iname , int iage){
        name = iname;
        age = iage;
    }
    void out(){
        cout<<name<<endl<<age<<endl;
    }
    void tellme (){
        cout<<name<<endl<<age<<endl;
    }
    friend void display (Human man);
};
void display (Human man ){
            cout<<man.name<<endl<<man.age<<endl;

}
int main(){
    Human geeetesh("geetesh ",17);
    display(geeetesh);
    geeetesh.out();
    geeetesh.tellme();
    //two difrrent metkhods
    return 0;
}