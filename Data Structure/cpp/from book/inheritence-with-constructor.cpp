#include <iostream>

using namespace std;

class Base{
    int n;
    public:
        Base(int n){this->n = n;}
        void showN(){cout<<n<<endl;}
};

class Derived1 : public Base{
    int j;
    public:
        Derived1(int j):Base(j){
            this->j = j;
        }
        void showJ(){cout<<j<<endl;}
};

class Derived2: public Base{
    public:
        Derived2(int j):Base(j){}
};

int main(){
    Derived1 d1(10);
    d1.showJ();
    d1.showN();

    Derived2 d2(20);
    d2.showN();
    
    return 0;
}