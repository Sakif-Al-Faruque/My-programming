#include <iostream>

using namespace std;

class myClass{
    int a;
    public:
        myClass();
        myClass(int); //parameterized contructor
        void set_a(int);
        int get_a();
};

//here constructor overloading has occurred
myClass::myClass(){

}

myClass::myClass(int value){
    a = value;
}

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

    myClass ob2(20);
    cout<<ob2.get_a()<<endl;

    return 0;
}