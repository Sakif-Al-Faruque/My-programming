#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n){
    int temp;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n = 5;
    int arr [n] = {15, 16, 6, 8, 5};

    bubbleSort(arr, n);
}