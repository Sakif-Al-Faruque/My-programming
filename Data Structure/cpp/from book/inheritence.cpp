#include <iostream>

using namespace std;

class Base{
    int x;
    public:
        void setx(int x){this->x = x;}
        int getx(){return x;}
};

class Derived1 : public Base{
    int y;
    public:
        void sety(int y){this->y = y;}
        int gety(){return y;}
};

class Derived2 : private Base{
    int y;
    public:
        void sety(int y){this->y = y;}
        int gety(){return y;}
};

int main(){
    Derived1 d1;
    d1.setx(10);
    d1.sety(20);

    cout<<d1.getx()<<" "<<d1.gety()<<endl;

    Derived2 d2;
    d2.sety(100);
    cout<<d2.gety()<<endl;

    return 0;
}