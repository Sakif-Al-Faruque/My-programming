#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n){
    int temp, flag;
    for(int i=0; i<n-1; i++){
        flag = 0;
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
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
    //int arr [n] = {15, 16, 6, 8, 5};
    int arr [n] = {16, 14, 5, 6, 8};

    bubbleSort(arr, n);
}