#include <iostream>

using namespace std;

class myClass{
    protected:
        int a;  //access modifier has been assigned
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

//inheritence
class myClass1:myClass{
    int k;
    public:
        myClass1(int val1, int val2);
        ~myClass1();
};

myClass1::myClass1(int val1, int val2){
    a = val1;
    k = val2;
}

myClass1::~myClass1(){
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of k: "<<k<<endl;
}

int main(){
    myClass ob1;
    ob1.set_a(10);
    cout<<ob1.get_a()<<endl;

    myClass ob2(20);
    cout<<ob2.get_a()<<endl;

    myClass1 c1(30, 40);

    return 0;
}