#include <iostream>

using namespace std;

class Array{
    int size, top;
    int *arr;
    public:
        Array(int s){
            top = 0;
            size = s;
            arr = new int[size];
        }
        ~Array(){
            delete[] arr;
        }
        int operator[](int index);
        void push(int element);
};

void Array::push(int element){
    *(arr+top) = element;
    top++;
}

int Array::operator[](int index){
    return *(arr+index);
}

int main(){

    Array arr(3);

    arr.push(10);
    arr.push(20);
    arr.push(30);

    cout<<arr[1]<<endl;

    return 0;
}