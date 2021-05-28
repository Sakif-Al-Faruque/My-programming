#include <iostream>

using namespace std;

class MyClass2;

class MyClass1{
    int a;
    public:
        MyClass1(int value){
            a = value;
        }
        friend int sum(MyClass1, MyClass2);
};

class MyClass2{
    int b;
    public:
        MyClass2(int value){
            b = value;
        }
        friend int sum(MyClass1, MyClass2);
};

int sum(MyClass1 o1, MyClass2 o2){
    return (o1.a + o2.b);
}



int main(){
    MyClass1 o1(10);
    MyClass2 o2(20);

    cout<<"Sum: "<<sum(o1, o2)<<endl;

    return 0;
}