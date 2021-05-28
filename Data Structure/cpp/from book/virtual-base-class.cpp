#include <iostream>

using namespace std;

class Base{
    int b;
    public:
        Base(){}
        Base(int b){this->b = b;}
        void showB(){cout<<"B = "<<b<<endl;}
};
class Derived1: virtual public Base{
    int d1;
    public: 
        Derived1(int d1){this->d1 = d1;}
        void showD1(){cout<<"D1 = "<<d1<<endl;}
};
class Derived2: virtual public Base{
    int d2;
    public: 
        Derived2(int d2){this->d2 = d2;}
        void showD2(){cout<<"D2 = "<<d2<<endl;}
};
class Derived: public Derived1, public Derived2{
    int d;
    public:
        Derived(int d, int d1, int d2):Derived1(d1), Derived2(d2), Base(d){
            this->d = d;
        }
        void showD(){cout<<"D = "<<d<<endl;}
};

int main(){
    Derived d(10, 20, 30);
    d.showD();
    d.showD1();
    d.showD2();
    d.showB();

    return 0;
}