#include<iostream>
using namespace std;
//WAIT THE PROGRAM IS NOT CLEAR
class father {
    protected :
    int height ;
    public :
    father(){
        cout<<"coknstructor is called "<<endl;
        height= h;}

};
class mother {
    private:
    string skincolour;
    public:
    mother(){
cout<<"constructor of mother is called"<<endl;}
};
class Child :public father():public mother(){
public:
Child(int x,string colour) : father(),mother(){
    height =x;
    skincolour = colour;
    cout<<"2nd condtructor is called"<<endl;}
    void display (){
        cout <<"height is"<<height<<"skincolour is"<<skincolour<<endl;
    }

};
int main(){
    Child anil(18,"white");
    anil.display();
    return 0;
}