#include <iostream>

using namespace std;

void cyclicRotation(int arr[], int n){
    int temp = arr[n-1];
    for(int i=n-2; i>=0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    cyclicRotation(arr, 5);

}