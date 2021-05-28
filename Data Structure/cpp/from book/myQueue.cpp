#include <iostream>
#define SIZE 100

using namespace std;

class MyQueue{
    int front = -1;
    int rear = -1;
    int que[SIZE];
    public:
        void init();
        void enqueue(int);
        int dequeue();
        void display();
};

void MyQueue::init(){
    front = rear = 0;
}

void MyQueue::enqueue(int element){
    if(rear == SIZE){
        cout<<"Queue is fUll"<<endl;
    }else{
        que[rear++] = element;
        cout<<"Element is inserted"<<endl;
    }
    
}

int MyQueue::dequeue(){
    int d = 0;
    if(front == rear){
        cout<<"Queue is empty"<<endl;
    }else{
        d = que[front++];
    }
    return d;
}

void MyQueue::display(){
    if(front == rear){
        cout<<"Queue is empty";
    }else{
        cout<<"Elements: ";
        for(int i=0; i<rear; i++){
            cout<<que[i]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    MyQueue q1;
    q1.init();

    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);

    q1.display();

    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    return 0;
}