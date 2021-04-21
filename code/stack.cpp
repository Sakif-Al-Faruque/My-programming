#include <iostream>
using namespace std;
#define MAXSIZE 5

int s[MAXSIZE]; // array to store the stack elements
int top; 		// index for the top element

/*
    1
    5
    4
    6
    2
*/
//function prototype declaration
void push(int value);
int pop();
int topp();
bool isStackEmpty();
bool isStackFull();
void display_stack();
int stackSize();


//functions implementations are from here

void push(int value)
{
    //your code here
    if(isStackFull()){
        cout<<"\t Overflow!!! Stack is Full ...";
    }
    else
    {
      s[top]=value;
      top++;
    }
    //push will be done if array is not full
    // before push check whether array of Stack is full or not. If full then show a message to user that
    // Stack is full. Otherwise push the value.

    // use isStackFull() function here to implement the push()
}

int pop()
{
    //your code here
    int x;
    if(isStackEmpty())
    {
       cout<<"\tUnderflow!!! Stack is Empty...";
       return NULL;
    }
    else{
        top--;
        x=s[top] ;
    }
    return x;

   //pop will be done if array is not empty
    // before pop check whether array of Stack is empty or not. If empty then show a message to user that
    // Stack is empty. Otherwise pop the value & return it.

    // use isStackEmpty() function here to implement the pop()
}

bool isStackEmpty()
{
    //your code here
    // return true if Stack is empty false otherwise
    return (top==0);
}

bool isStackFull()
{
      //your code here
    // return true if Stack is full false otherwise
    return (top>=MAXSIZE);
}

int stackSize()
{
    //your code here
    return top;
   //return current allocated size of the Stack
}

void display_stack()
{
    //your code here
    for(int i=top-1;i>=0;i--)
        cout<< "\t\t"<<s[i] <<endl;
    // display all elements of Stack from top to bottom.

}
int topp()
{
    //return top value here
    if(isStackEmpty()){
        cout<<"\tStack is Empty...";
        return NULL;
    }
    return s[top-1];
}
void stack_initialize()
{
    top=0;
}
int main()
{
    int option,n, value;
    stack_initialize();
    cout<<"C++ program to implement stack operations\n";
    do
    {
        cout<<"\n\n 1.Push an element in stack";
        cout<<"\n 2.Pop an element from stack";
        cout<<"\n 3.Display stack";
        cout<<"\n 4.Display current stack size ";
        cout<<"\n 5.Display top element ";
        cout<<"\n 6.Exit";
        cout<<"\n Enter your choice: ";
        cin>>option;
        switch(option)
        {
        case 1:
            cout<<"\n Insert an element in stack : ";
            cin>>n;
            push(n);
            break;
        case 2:
            value = pop();
            if(value!=NULL)
            cout<<"\n \tPopped element is: "<<value<<endl;
            break;
        case 3:
            display_stack();
            break;
        case 4:
            value=stackSize();
            cout<<" \n\tCurrently number of element in stack is "<<value;
            break;
        case 5:
            value=topp();
            if(value != NULL)
                cout<<"\n\tCurrent top element is "<<value;
            break;
        case 6:
            return 0;
        }

    }
    while(option!=6);

    return 0;
}
