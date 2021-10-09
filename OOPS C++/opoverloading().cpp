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
        cout<<"hey i got"<<mark<<"marks"<<endl;
    }
Marks operator()(int mk){
    mark = mk;
    cout<<"ooperator is called"<<endl;
    reutrn *this;
}
};
int main(){
    Marks anilsmark(85);
    anilsmark.whatsyourmark();

    anilsmark(44);
    return 0;
}