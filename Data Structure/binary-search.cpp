#include <iostream>
#include <cmath>

using namespace std;

int binarySearch(int arr[], int n, int data){
    int l = 0, r = n-1, mid;

    while (l <= r)
    {
        mid = floor((r+l)/2);
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

int main(){

    int arr[5] = {1, 2, 3, 4, 5};

    cout<<binarySearch(arr, 5, 5);

    return 0;
}