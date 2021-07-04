#include <iostream>

using namespace std;

void recieved_array(int *arr, int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<*(arr+i*c+j)<<" ";
        }
        cout<<endl;
    }
}

int** getArray(int r, int c){
    int** arr = new int*[r];
    for(int i=0; i<r; i++){
        arr[i] = new int[c];
        for(int j=0; j<c; j++){
            cout<<"Enter value for index ["<<i<<"]"<<"["<<j<<"] :";
            cin>>arr[i][j];
        }
    }
    return arr;
}

int main(){
    

    //recieved_array((int*)arr, 2, 2);

    

    return 0;
}