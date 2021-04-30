#include <iostream>

using namespace std;

void rotateArray(int arr[], int d, int n){
    int tempArr[d];
    int temp;
    for (int i=0; i<d; i++){
        tempArr[i] = arr[i];
    }
    for (int i=0; i<d; i++){
        for(int j=1; j<n; j++){
           arr[j-1] = arr[j];
        }
    }
    for(int i=0, j=(n-d); j<n; i++, j++){
        arr[j] = tempArr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
        
    }
}

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    rotateArray(arr, 3, 6);
    return 0;
}