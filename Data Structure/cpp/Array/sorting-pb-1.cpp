//without time complexity
#include <iostream>

using namespace std;

int maxFromArray(int arr[], int n){
    int max = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > arr[max]){
            max = i;
        }
    }
    return max;
}

int minFromArray(int arr[], int n){
    int min = 0;
    for(int i=0; i<n; i++){
        if(arr[i] < arr[min]){
            min = i;
        }
    }
    return min;
}

void alternativeSort(int arr[], int n){
    int max = maxFromArray(arr, n);
    int min = minFromArray(arr, n);
    int i, j;
    int temp1 = arr[max], temp2 = arr[min];

    for(i=min; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[i] = temp2;

    for(j=max; j>0; j--){
        arr[j] = arr[j-1];
    }
    arr[j] = temp1;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n = 8;
    int arr[n] = {7, 4, 6, 1, 8, 0, 3, 11};

    printArray(arr, n);
    cout<<endl;
    alternativeSort(arr, n);
    printArray(arr, n);
    return 0;
}