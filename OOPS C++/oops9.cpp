#include<iostream>
using namespace std;

/*void display () ;

int main(){
    display();
    display();
    return 0;
}
void display () {
    static int counter = 0;
    cout<<"dosplay funvtiok called "<<++counter<<"tines "<<endl;*/

    class Human{
        public: 
        static int human_count;
        Human(){
            human_count++;
        }
        void humantotal () {
            cout<<"There are "<<human_count<<"people  in this program "<<endl;
        }


    };
int Human::human_count;

int main() {

Human geetesh;
Human gudiya;
Human *pointer = &geetesh;
pointer->humantotal();
Human f;
geetesh.humantotal();
cout<<Human::human_count<<endl;

return 0;
}