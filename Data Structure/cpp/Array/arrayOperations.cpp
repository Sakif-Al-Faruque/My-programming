#include <iostream>
#define UPPER_BOUND 10

using namespace std;

void traversal(int arr[], int s){
    for(int i=0; i<s; i++){
        cout<<arr[i]<<endl;
    }
}

void insertAtSpecificPos(int arr[], int s, int num, int pos){
    if(s >= UPPER_BOUND){
        cout<<"Insertion can not be possible, as array is full";
    }
    if((pos < 0) || (pos > (s+1))){
        cout<<"Invalid position";
    }
    for(int i=(s-1); i>=(pos-1); i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = num;
    s++;

    traversal(arr, s);
}

void insertAtFirstPos(int arr[], int s, int num){
    if(s >= UPPER_BOUND){
        cout<<"Insertion can not be possible, as array is full";
    }
    for(int i=(s-1); i>=0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = num;
    s++;

    traversal(arr, s);
}

void insertAtLastPos(int arr[], int s, int num){
    if(s >= UPPER_BOUND){
        cout<<"Insertion can not be possible, as array is full";
    }
    arr[s] = num;
    s++;

    traversal(arr, s);
}

int main (){
    int arr_size;
    int arr[UPPER_BOUND];
    cout<<"Enter the size of the array: ";
    cin>>arr_size;
    for(int i=0; i<arr_size; i++){
        cin>>arr[i];
    }
    /* traversal(arr, arr_size); */
    /* insertAtSpecificPos(arr, arr_size, 4, 2); */
    /* insertAtFirstPos(arr, arr_size, 4); */
    insertAtLastPos(arr, arr_size, 4);
    return 0;
}