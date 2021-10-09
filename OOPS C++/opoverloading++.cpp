#include<iostream>
using namespace std;
class Marks{
    int mark;
    public :
    Marks() {
        mark =0;
    }
    Marks (int m){
        mark = m;
    }
void yourmarkplease() {
    cout<<"Your mark is "<<mark<<endl;
}

void operator++() {
    mark += 1;
}

friend void operator--(Marks&);

};
void operator--(Marks &m ){
m.mark -=1;  
}

int main(){
    Marks anilmark(68);
    anilmark.yourmarkplease();
    ++anilmark;
    anilmark.yourmarkplease();
    --anilmark;
    anilmark.yourmarkplease();
    return 0;
}