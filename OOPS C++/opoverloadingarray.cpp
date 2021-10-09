#include<iostream>
using namespace std;
class Marks{
    int subjects[3];
    public :
    Marks (int m1,int m2,int m3){
        subjects[0] = m1;
                subjects[1] = m2;
        subjects[2] = m3;

    }

     int operator[](int position) {
         return subjects[position];
     }
};
int main(){
    Marks anil(22,44,33);
    cout<<anil[0];
    return 0;
}