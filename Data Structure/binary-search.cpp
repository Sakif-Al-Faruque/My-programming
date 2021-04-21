#include <iostream>

using namespace std;

int binarySearch(int arr[], int k, int low, int high){
    int mid = (high-low)/2;
    if(arr[mid] == k){
        return mid;
    }else if(arr[mid] > k){
        return (arr, k, mid+1, high);
    }else if(arr[mid] < k){
        return (arr, k, low, mid-1);
    }else{
        return -1;
    }
}

int main(){

    int arr[5] = {1, 2, 3, 4, 5};

    cout<<binarySearch(arr, 2, 0, 4);

    return 0;
}