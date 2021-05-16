#include <iostream>

using namespace std;

int x; //   for applying returning references

class Samp{
    int k;
    public:
        Samp(int k){
            this->k = k;
        }
        void set_k(int);
        int get_k();

};

void Samp::set_k(int k){
    this->k = k;
}

int Samp::get_k(){
    return k;
}

void Show(Samp &o){
    cout<<o.get_k()<<endl;
}

void swap(int &i, int &j){
    int t;

    t = i;
    i = j;
    j = t;
}

int &f(){
    return x;
}

int main(){
    //  for normal variable
    /* int i = 10, j = 20;

    //before swapping
    cout<<"i = "<<i<<" ... j = "<<j<<endl;

    swap(i, j);

    //after swapping
    cout<<"i = "<<i<<" ... j = "<<j<<endl; */

    Samp ob(10);
    Show(ob);

    f() = 100; // value get assinged to 'x' via 'f()' function
    cout<<x<<endl;

    return 0;
}