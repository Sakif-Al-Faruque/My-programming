#include <iostream>

using namespace std;

struct node {
    int data;
    int *p;
};

//syntax: typedef data_type variable_name
typedef struct nodes {
    int data;
    int *p;
} Node;

int main(){
    struct node n, *m; // just structure
    Node j; //for typedef
    int k = 15;
    int l = 17;

    n.data = 10;
    n.p = &k;

    m = &n;

    j.data = 13;
    j.p = &l; 

    cout<<n.data<<endl;
    cout<<n.p<<endl;

    cout<<m->data<<endl;
    cout<<*m->p<<endl;

    cout<<j.data<<endl;
    cout<<j.p<<endl;
    return 0;
}