#include<iostream>
using namespace std;

class Marks{
int internalmarks;
int externalmarks;
public :
Marks(){
internalmarks = 0;
externalmarks = 0;
}
Marks(int internal,int external){
internalmarks = internal;
externalmarks = external;
}

void display() {
    cout<<internalmarks<<" "<<externalmarks<<endl;
}
Marks operator+(Marks m) {
Marks temp ;
temp.internalmarks = internalmarks+ m.internalmarks;
temp.externalmarks = externalmarks + m.externalmarks;
return temp;
}
};
int main(){
    Marks m1(10,20);
    Marks m2(30,40);

    Marks m3 = m1 + m2;
m3.display();
    return 0;
}