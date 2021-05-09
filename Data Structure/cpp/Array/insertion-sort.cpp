#include <iostream>

using namespace std;

void insertionSort(int arr[], int n){
    int j, temp;
    for(int i=1; i<n; i++){
        temp = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n = 6;
    int arr[n] = {5, 4, 10, 1, 6, 2};

    insertionSort(arr, n);
    return 0;
}