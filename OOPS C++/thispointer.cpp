#include<iostream>
using namespace std;
// this points to address of the variable to which it is pointing
    class person{
        private:
        int age;
        public:
        void setage(int age){
       this->age  = age;//or this age - i age
        }
        void displayage(){
            cout<<this->age<<endl;
        }
    };
    int main(){
        person anil;
        anil.setage(18);
        anil.displayage();

    return 0;
}