#include <iostream>

using namespace std;

int maxVal(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void countingSort(int a[], int n){
    int k = maxVal(a, n);
    int b[n];
    int count[k+1];

    for(int i=0; i<=k; i++){
        count[i] = 0;
    }

    for(int i=0; i<n; i++){
        count[a[i]]++;
    }

    for(int i=1; i<=k; i++){
        count[i] += count[i-1];
    }

    for(int i=n-1; i>=0; i--){
        b[--count[a[i]]] = a[i];
    }

    for(int i=0; i<n; i++){
        a[i] = b[i];
    }
}

int main(){
    int n=17;
    int arr[n] = {2, 1, 1, 0, 2, 5, 4, 0, 2, 8, 7, 7, 9, 2, 0, 1, 9};
    countingSort(arr, n);

    printArray(arr, n);
    return 0;
}