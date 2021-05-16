#include <iostream>

using namespace std;

class Array{
    int *p;
    int size;

    public:
        Array(int size){
            this->size = size;
            p = new int[size];
            
            if(!p){
                cout<<"Memory allcation error"<<endl;
            }
            cout<<"Using normal constructor"<<endl;
        }
        void put(int i, int j){
            if(i>=0 && i<size){
                p[i] = j;
            }
        }
        int get(int i){
            return p[i];
        }
        Array(const Array &a){
            size = a.size;

            p = new int[size];
            if(!p){
                cout<<"Memory allcation error"<<endl;
            }

            for(int i=0; i<size; i++){
                p[i] = a.p[i];
            }
        }

        ~Array(){
            delete[] p;
        }
};

int main(){

    Array num(3);

    num.put(0, 10);
    num.put(1, 20);
    num.put(2, 30);

    for(int i=0; i<3; i++){
        cout<<num.get(i)<<endl;
    }

    cout<<endl<<endl;

    Array x = num; //initialization happened

    for(int i=0; i<3; i++){
        cout<<x.get(i)<<endl;
    }

    x.put(0, 100);

    cout<<endl<<endl;

    for(int i=0; i<3; i++){
        cout<<x.get(i)<<endl;
    }

    return 0;
}