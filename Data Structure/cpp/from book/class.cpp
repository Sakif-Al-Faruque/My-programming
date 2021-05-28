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

//a simple approach to make 'set_a' function 'inline'
inline void myClass::set_a(int value){
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

//passing object as parameter
void myFunc1(myClass obj){ //pass by value
    cout<<"From myFunc1: "<<obj.get_a()<<endl;
}

void myFunc2(myClass *obj){ //pass by reference
    cout<<"From myFunc2: "<<obj->get_a()<<endl;
}

int main(){
    myClass ob1;
    ob1.set_a(10);
    cout<<ob1.get_a()<<endl;

    myClass ob2(20);
    cout<<ob2.get_a()<<endl;

    myClass1 c1(30, 40);

    myClass ob3, *obp;
    obp = &ob3;

    obp->set_a(100);
    cout<<obp->get_a()<<endl;

    //assigning object
    myClass ob4, ob5;

    ob4.set_a(200);
    ob5 = ob4;
    cout<<ob4.get_a()<<endl;
    cout<<ob5.get_a()<<endl;

    //passing object argument
    myClass obj1(500);
    myFunc1(obj1);  //pass by value

    myClass obj2(600);
    myFunc2(&obj2); //pass by reference

    return 0;
}