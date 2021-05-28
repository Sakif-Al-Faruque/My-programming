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

class Base1{
    int i;
    public:
        Base1(int i){this->i = i;}
        void showI(){cout<<"i = "<<i<<endl;}
};

class Base2{
    int j;
    public:
        Base2(int j){this->j = j;}
        void showJ(){cout<<"j = "<<j<<endl;}
};

class Derived: public Base1, public Base2{
    int m, n;
    public:
        Derived(int m, int n):Base1(m), Base2(n){
            this->m = m;
            this->n = n;
        }
        void showMN(){
            cout<<"m = "<<m<<" ... n = "<<n<<endl;
        }
};

int main(){
    Derived1 d1(10);
    d1.showJ();
    d1.showN();

    Derived2 d2(20);
    d2.showN();

    Derived d(10, 20);
    d.showI();
    d.showJ();
    d.showMN();
    
    return 0;
}