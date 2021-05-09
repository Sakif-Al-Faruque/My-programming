#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int *temp;
    temp = a;
    a = b;
    b = temp;
}

void seletionSort(int arr[], int n){
    int min;
    for(int i=0; i<n-1; i++){
        min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            swap(arr[i], arr[min]);
        }
    }
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n=6;
    int arr[n] = {7, 4, 10, 8, 3, 1};

    seletionSort(arr, n);
    return 0;
}