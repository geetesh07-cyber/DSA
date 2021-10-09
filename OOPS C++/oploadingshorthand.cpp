#include<iostream>
using namespace std;
class Marks{
int mark;
public:
Marks (){
    mark = 0;
}
Marks (int imark){
    mark = imark;
}
void yourmarkplease(){
    cout<<"your mark is"<<mark<<endl;
}
void operator+=(int bonusmark){
    mark = mark + bonusmark;
}

friend void operator-=(Marks &curobj, int redmark);

};

void operator -= (Marks &curobj, int redmark){

    curobj.mark -= redmark;
}

int main(){
    //short hand operators are those += ; -=
   Marks anilmark(45);
   anilmark.yourmarkplease();

anilmark += 20;
anilmark.yourmarkplease();

anilmark -= 20;
anilmark.yourmarkplease();
    return 0;
}