#include <iostream>

using namespace std;

int main(){
    int num, ch=1;
    cout<<"Enter to a number to check: ";
    cin>>num;

    for(int i=2; i<num; i++){
        if(num%i == 0){
            ch = 0;
            break;
        }
    }

    if(ch){
        cout<<"Prime number"<<endl;
    }else{
        cout<<"Not a prime number"<<endl;
    }

    return 0;
}