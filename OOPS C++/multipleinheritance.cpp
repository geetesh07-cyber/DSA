#include<iostream>
using namespace std;
class Father{
public:
int height;
void askfather(){
    cout<<"i am ur father ask me whar u want "<<"\n";
}
};
class mother{
    public:
    string skincolour;
    void askmother()
{
    cout<<"i am ur mother"<<endl;
}
};
class child : public Father,public mother{
    public:
    void ask(){
        cout<<"i am chils"<<endl;
    }
    void setcolor(string skincol,int iheight){
        skincol = skincolour;
        iheight = height;
    }
    void displaycolor(){
        cout<<skincolour<<" "<<height<<endl;
    }
};

int main(){
    child a;
a.setcolor("geren",98);
a.displaycolor();
a.askfather();
a.ask();
a.askmother();
    return 0;
}