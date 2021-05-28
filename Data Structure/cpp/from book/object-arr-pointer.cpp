#include <iostream>

using namespace std;

class MyClass{
    int k, l;
    public:
        MyClass(){}
        MyClass(int k){
            this->k = k;    //this pointer
        }
        MyClass(int k, int l){
            this->k = k;    //this pointer
            this->l = l;    //this pointer
        }
        int getK(){
            return k;
        }
        int getSum(){
            return k+l;
        }
};

int main(){
    MyClass ob1[5] = {10, 20, 30, 40, 50}; //passing single argument in constructor of 1D array.

    MyClass ob2[5] = {
        MyClass(1, 5),
        MyClass(10, 20),
        MyClass(20, 30),
        MyClass(100, 20),
        MyClass(50, 50)
    }; //passing more thant 1 argument in constructor of 1D array.

    MyClass ob3[5][2] = {
        1, 5,
        10, 15,
        20, 25,
        30, 35,
        40, 45
    }; //passing single argument in constructor of 2D array.

    MyClass ob4[3][2] = {
        MyClass(1, 5), MyClass(10, 15),
        MyClass(20, 25), MyClass(30, 35),
        MyClass(40, 45), MyClass(50, 55)
    };
    
    MyClass *pob1;
    pob1 = ob1; //pointer object

    for(int i=0; i<5; i++){
        cout<<ob1[i].getK()<<endl;
    }

    cout<<endl<<endl;

    for(int i=0; i<5; i++){
        cout<<ob2[i].getSum()<<endl;
    }

    cout<<endl<<endl;

    for(int i=0; i<5; i++){
        for(int j=0; j<2; j++){
            cout<<ob3[i][j].getK()<<endl;
        }
    }

    cout<<endl<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout<<ob4[i][j].getSum()<<endl;
        }
    }

    cout<<endl<<endl;

    for(int i=0; i<5; i++){
        cout<<(pob1+i)->getK()<<endl;
    }

    return 0;
}