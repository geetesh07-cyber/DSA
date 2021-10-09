#include<iostream>
using namespace std;

class Marks{
    int mark;
    public :
    Marks(int m){
        cout<<"consstructor is called"<<endl;
        mark = m;
    }

    void whatsyourmark(){
        cout<<"hey i got "<<mark<<" marks"<<endl;
    }
     
     Marks *operator->(){
         return this;
     }
};
int main(){
    Marks anilsmark(65);
    anilsmark.whatsyourmark();
    anilsmark->whatsyourmark();
    return 0;
}