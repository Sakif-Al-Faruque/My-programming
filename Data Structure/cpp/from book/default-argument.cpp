#include <iostream>

using namespace std;

int func1(int i, int j=10){
    return i+j;
}

int func2(int i, int j=0){
    if(j == 0){
        j = i;
    }
    return i*j;
}

int main(){
    cout<<func1(10)<<endl;
    cout<<"Rectangle: "<<func2(10, 20)<<endl;
    cout<<"Square: "<<func2(10)<<endl;
    return 0;
}
