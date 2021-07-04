#include <iostream>
#include <cstring>
using namespace std;

struct Item{
    int weight, value;
    Item(){}
    Item(int weight, int value){
        this->weight = weight;
        this->value = value;
    }
};

void swapItem(struct Item &i1, struct Item &i2){
    struct Item temp = i1;
    i1 = i2;
    i2 = temp;
}

bool cmp(struct Item v1, struct Item v2){
    double r1 = v1.value/v1.weight;
    double r2 = v2.value/v2.weight;

    return r1<r2;
}

void sortItems(struct Item arr[], int n){
    int flag;
    for(int i=0; i<n-1; i++){
        flag = 1;
        for(int j=0; j<n-1-i; j++){
            if(cmp(arr[j], arr[j+1])){
                swapItem(arr[j], arr[j+1]);
                flag = 0;
            }
        }
        if(flag){
            break;
        }
    }
}

double knapsackFinalValue(struct Item arr[], int n, int capacity){
    double finalValue = 0.0;
    int currentWeight = 0;

    sortItems(arr, n);

    for(int i=0; i<n; i++){
        if(currentWeight + arr[i].weight <= capacity){
            currentWeight += arr[i].weight;
            finalValue += arr[i].value;
        }else{
            int remainWeight = capacity - currentWeight;
            finalValue += (arr[i].value*((double)remainWeight/arr[i].weight));
            break;
        }
    }
    return finalValue;
}

int main(){
    int n = 3;
    struct Item arr[3] = {
        Item(10, 60),
        Item(20, 100),
        Item(30, 120)
    };
    int weight = 50;
    /* sortItems(arr, 3);

    for(int i=0; i<3; i++){
        cout<<"weight: "<<arr[i].weight<<" ... value: "<<arr[i].value<<endl;
    } */

    cout<<knapsackFinalValue(arr, n, weight);

    return 0;
}
