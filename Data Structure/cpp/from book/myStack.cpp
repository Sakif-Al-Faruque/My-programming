#include <iostream>
#define SIZE 1000

using namespace std;

class MyStack{
    int top = -1;
    char stck[SIZE];
    public:
        void init();
        void push(char);
        char pop();
        void display(); 
};

void MyStack::init(){
    top = 0;
}

void MyStack::push(char element){
    if(top == SIZE){
        cout<<"Stack is full"<<endl;
    }else{
        stck[top++] = element;
        cout<<"Element is inserted"<<endl;
    }
}

char MyStack::pop(){
    int c = '\0';
    if(top == -1){
        cout<<"Stack is empty";
    }else{
        top--;
        c = stck[top];
        
    }
    return c;
}

void MyStack::display(){
    if(top == -1){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Elements are: ";
        for(int i=0; i<top; i++){
            cout<<stck[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    MyStack s1;
    s1.init();

    s1.push('s');
    s1.push('a');
    s1.push('k');
    s1.push('i');
    s1.push('f');

    s1.display();

    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;

    return 0;
}