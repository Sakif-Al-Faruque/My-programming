#include <iostream>
#include <cmath>

using namespace std;

int pivotElementIndex(int arr[], int n){
    int flag = -1;
    for(int i=0; i<n-2; i++){
        if(arr[i] > arr[i+1]){
            flag = i;
            break;
        }
    }
    return flag;
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
    if(pivotElementIndex(arr, n) < 0){
        if(binarySearch(arr, n, data) > 0){
            cout<<"Index is: "<<binarySearch(arr, n, data)<<endl;
        }else{
            cout<<"Not found";
        }
    }else{
        int pEle = pivotElementIndex(arr, n)+1;
        int arr1[pEle];
        int arr2[n-pEle];
        for(int i=0; i<pEle; i++){
            arr1[i] = arr[i];
        }
        for(int i=pEle, j=0; i<n; i++, j++){
            arr2[j] = arr[i];
        }
        if(binarySearch(arr1, pEle, data) > 0){
            cout<<"Index is: "<<binarySearch(arr1, pEle, data)<<endl;
        }else if(binarySearch(arr2, n-pEle, data) > 0){
            cout<<"Index is: "<<binarySearch(arr2, n-pEle, data)+pEle<<endl;
        }else{
            cout<<"Not found";
        }
    }
}

int main(){
    int arr[6] = {4, 5, 6, 1, 2, 3};
    seachingElement(arr, 6, 6);

}