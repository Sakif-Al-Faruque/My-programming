#include <iostream>

using namespace std;

class Base{
    int x;
    protected:
        int k, m;
    public:
        void setx(int x){this->x = x;}
        int getx(){return x;}

        void setk(int k){this->k = k;}
        int getk(){return k;}
};

class Derived1 : public Base{
    int y;
    public:
        void sety(int y){this->y = y;}
        int gety(){return y;}

        void setm(int m){this->m = m;}
        int getm(){return m;}        
};

class Derived2 : private Base{
    int y;
    public:
        void sety(int y, int z){this->y = y; setx(z);}
        int gety(){return y;}
        int getz(){return getx();}
};

class Derived3 : protected Base{
    int l;
    public:
        void setkl(int k, int l){setk(k); this->l = l;}
        int sum(){return (getk()+l);}
};

int main(){
    Derived1 d1;
    d1.setx(10);
    d1.sety(20);

    d1.setm(11);

    cout<<d1.getx()<<" "<<d1.gety()<<endl;
    cout<<d1.getm()<<endl;

    Derived2 d2;
    d2.sety(100, 200);
    cout<<d2.gety()<<" "<<d2.getz()<<endl;

    Derived3 d3;
    d3.setkl(1000, 2000);
    cout<<d3.sum()<<endl;

    return 0;
}