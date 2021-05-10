#include <iostream>

using namespace std;

void swap(int*, int*);
int partition(int[], int, int);
void quickSort(int[], int, int);
void printArray(int[], int);

int main(){
    int n = 9;
    int arr[n] = {7, 6, 10, 5, 9, 2, 1, 15, 7};

    quickSort(arr, 0, 8);
    printArray(arr, n);
    return 0;
}
//passing values will swap the values
//passing references will swap the references

void swap(int* a, int* b){
    int* temp;
    temp = a;
    a = b;
    b = temp;
}

int patition(int arr[], int lb, int ub){
    int sw = lb-1;
    int pivot = arr[ub];
    for(int curr=lb; curr < ub; curr++){
        if(arr[curr] < pivot){
            sw++;
            swap(arr[sw], arr[curr]);
        }
    }
    swap(arr[sw+1], arr[ub]);
    return sw+1;
}

void quickSort(int arr[], int lb, int ub){
    int loc;
    if(lb < ub){
        loc = patition(arr, lb, ub);
        quickSort(arr, lb, loc-1);
        quickSort(arr, loc+1, ub);
    }
}

void printArray(int arr[], int n){
    cout<<"Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}