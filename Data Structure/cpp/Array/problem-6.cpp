#include <iostream>

using namespace std;

void findPairElement(int arr[], int n, int sum){
    int flag = 0, p1, p2;
    for(int i=0; i<n; i++){
        if(!(i == n-1)){
            for(int j=i+1; j<n; j++){
                if((arr[i]+arr[j]) == sum){
                    flag = 1;
                    p1 = arr[i];
                    p2 = arr[j];
                    break;
                }
            }
        }
    }
    if(flag){
        cout<<"True"<<endl;
        cout<<"There is a pair ("<<p1<<", "<<p2<<") with sum "<<sum<<endl;
    }else{
        cout<<"False"<<endl;
        cout<<"There is no such pair"<<endl;
    }
}

int main(){
    int arr[6] = {11, 15, 26, 38, 9, 10};
    findPairElement(arr, 6, 45);
    return 0;
}