#include <iostream>
#include <cmath>

using namespace std;

void merge(int arr[], int lb, int mid, int ub){
    int n1 = mid - lb + 1;
    int n2 = ub - mid;

    int L[n1], R[n2];

    for(int i=0; i<n1; i++){
        L[i] = arr[lb + i];
    }
    for(int j=0; j<n2; j++){
        R[j] = arr[mid + 1 + j];
    }

    int i=0, j=0, k=lb;
    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int lb, int ub){
    if(lb < ub){
        int mid = floor((ub+lb)/2);
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid+1, ub);
        merge(arr, lb, mid, ub);
    }
}

void printArray(int arr[], int n){
    cout<<"Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[9] = {15, 5, 24, 8, 1, 3, 16, 10, 20};

    mergeSort(arr, 0, 8);
    printArray(arr, 9);

    return 0;
}