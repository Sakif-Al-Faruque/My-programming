#include <iostream>

using namespace std;

class myClass{
    int a;
    public:
        void set_a(int);
        int get_a();
};

void myClass::set_a(int value){
    a = value;
}

int myClass::get_a(){
    return a;
}

int main(){
    myClass ob1;
    ob1.set_a(10);
    cout<<ob1.get_a()<<endl;
    
    return 0;
}