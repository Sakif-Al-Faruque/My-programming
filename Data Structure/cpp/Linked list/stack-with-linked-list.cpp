#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node *next;
};

class stck{
    int top;
    Node *head;
    public:
        stck(){
            top = 0;
            head = NULL;
        }
        void push(int);
        int pop();
        void displayElements();
};

void stck::push(int d){
    Node *newnode, *temp;
    newnode = new Node;
    newnode->data = d;
    newnode->next = NULL;

    if(head == NULL){
        head = temp = newnode;
    }else{
        temp->next = newnode;
        temp = newnode;
    }

    cout<<"Element: "<<d<<"has been inserted"<<endl;
    top++;
}

int stck::pop(){
    if(top == 0){
        return top;
    }else{
        Node *prev = head;
        while (prev->next->next != NULL){
            prev = prev->next;
        }

        int result = prev->next->data;
        
        prev->next = NULL;
        delete prev->next;

        top--;
        return result;
    }
}

void stck::displayElements(){
    if(top == 0){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack has total "<<top<<" elements: ";
        Node *temp = head;
        while (temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}

int main(){
    stck s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    s1.displayElements();

    cout<<s1.pop()<<" has been popped"<<endl;

    s1.displayElements();
    return 0;
}