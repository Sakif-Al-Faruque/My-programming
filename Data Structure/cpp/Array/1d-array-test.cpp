#include <iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4};
    int *q;
    q = arr;
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<&arr+1<<endl;
    cout<<&q[0]<<endl;
    cout<<q[0]<<endl;
    cout<<*q<<endl;
    cout<<*q+1<<endl;
    cout<<*(q+1)<<endl; 
    return 0;
}