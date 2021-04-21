#include <iostream>

using namespace std;

int main(){
    int m, n, flag = 1, fac = 1;
    cout<<"Enter a number: ";
    cin>>n;

    m = n/2;

    for(int i=2; i<=m; i++){
        if(n%i == 0){
            flag = 0;
            break;
        }
    }

    if(flag == 1){
        cout<<"Prime number"<<endl;
        for(int i=1; i<=n; i++){
            fac *= i;
        }
        cout<<"Factorial = "<<fac<<endl;
    }else{
        cout<<"Not a prime number!"<<endl;
    }
    return 0;
}