#include<iostream>
using namespace std;
#define MAXSIZE 5

int q[MAXSIZE]; // array to store the queue elements
int front; 			// index for the front element
int rear; 			// index for immediately past the rear element

//function prototype declaration
void enqueue(int element);
int dequeue();
bool isQueueEmpty();
int queueSize();
bool isQueueFull();
void display_queue();

//functions implementations are from here

void enqueue(int element)
{
    //your code here
    if (rear >= (MAXSIZE - 1)) {
        cout << "Queue Overflow\n";
    }
    else {
        q[++rear] = element;
        cout << element << " Enque into queue\n";
    }
    if(rear == 0){
        front = 0;
    }
    // before enqueue check whether arearay of Queue is full or not. If full then show a message to user that
    // Queue is full. Otherwise enqueue the value.

    // use isQueueFull() function here to implement the enqueue()
}

int dequeue()
{
   //your code here
   if (front < 0) {
        cout << "Queue Underflow\n";
        return 0;
    }
    else {
        int x = q[front++];
        return x;
    }
   //dequeue will be in circular fashion if array is not empty
    // before dequeue check whether array of Queue is empty or not. If empty then show a message to user that
    // Queue is empty. Otherwise dequeue the value & return it.

    // use isQueueEmpty() function here to implement the dequeue()
}

bool isQueueEmpty()
{
    //your code here
    return (front == -1 && rear == -1);
    // return true if Queue is empty false otherwise
}

bool isQueueFull()
{

    //your code here
    // return true if Queue is full false otherwise

}

int frontElement(){
    //check is empty
    //return front element
}

int queueSize()
{
    //your code here
   //return current allocated size of the queue
}

void display_queue()
{
    //your code here
    if(isQueueEmpty()) { 
        cout << "Queue empty\n"; 
        return; 
    }
    cout << "The Elements of the Queue are: \n";
	for( int i=front; i<=rear; i++ ) cout << q[i] << endl;
    // display all elements of Queue from front to rear.

}
void queueInitialize(){
    front=rear=-1;
}
int main()
{
    int option,n, value;
    queueInitialize();
    cout<<"C++ program to implement Queue operations\n";
    do
    {
        cout<<"\n 1.Insert an element in Queue";
        cout<<"\n 2.Delete an element from Queue";
        cout<<"\n 3.Display Queue";
        cout<<"\n 4.Exit";
        cout<<"\n Enter your choice: ";
        cin>>option;
        switch(option)
        {
        case 1:
            cout<<" Insert an element in Queue: ";
            cin>>n;
            enqueue(n);
            break;
        case 2:
            value = dequeue();
            if(value != NULL)
            cout<<" Dequeue element is: "<<value<<endl;
            break;
        case 3:
            display_queue();
            break;
        case 4:
            return 0;
        }
    }
    while(option!=4);

    return 0;
}
