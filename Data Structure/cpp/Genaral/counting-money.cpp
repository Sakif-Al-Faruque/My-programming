#include <iostream>
#include <stack>

using namespace std;

void noteCount(stack<int> notes){
    int k = 0, n = notes.size(), count;
    int a[n];
    

    while (!notes.empty())
    {
        a[k] = notes.top();
        k++;
        notes.pop();
    }

    /* for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    } */

    for(int i=0; i<n; i++){
        count = 1;
        if(a[i] == -1){
            continue;
        }else{
            for(int j=i+1; j<n; j++){
                if(a[i] == a[j]){
                    count++;
                    a[j] = -1;
                }
            }
        }
        cout<<a[i]<<" - "<<count<<endl;
    }
    
}

void minCount(int money){
    int n = 10;
    stack<int> result;
    int domination[n] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    for(int i=0; i<n; i++){
        while (money >= domination[i]){
            result.push(domination[i]);
            money -= domination[i];
        }
    }
    
    cout<<"Total number of notes: "<<result.size()<<endl;
    
    noteCount(result);
}

int main(){
    int x = 15715;
    minCount(x);
    return 0;
}