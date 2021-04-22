#include <iostream>
#include <cmath>

using namespace std;

int pivotElementIndex(int arr[], int n){
    for(int i=0; i<n-2; i++){
        if(arr[i] > arr[i+1]){
            return i;
        }
    }
}

int binarySearch(int arr[], int n, int data){
    int l=0, r=n-1, mid;
    while (l <= r)
    {
        mid = floor((l+r)/2);
        if(data == arr[mid]){
            return mid;
        }else if(data > arr[mid]){
            l = mid+1;
        }else{
            r = mid-1;
        }
    }
    return -1;
}

void seachingElement(int arr[], int n, int data){
    int pEle = pivotElementIndex(arr, n)+1;
    int arr2[pEle];
    int arr1[n-pEle];

    for(int i=pEle, j=0; i<n; i++, j++){
        arr1[j] = arr[i];
        
    }
    for(int i=0; i<pEle; i++){
        arr2[i] = arr[i];
        
    }

    if(binarySearch(arr2, pEle, data) > -1){
        cout<<binarySearch(arr2, n, data);
    }else{
        cout<<binarySearch(arr1, (n-pEle), data);
    }
}

int main(){
    int arr[5] = {3, 4, 5, 1, 2};
    seachingElement(arr, 5, 2);

}