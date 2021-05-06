//creation and display
#include <iostream>
#include <cstdlib>

using namespace std;

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = NULL;

void createList(){
    int d, choice = 1;
    struct Node *newNode, *temp;

    while(choice){
        newNode = (struct Node*)malloc(sizeof(struct Node));
        cout<<"Enter your data: ";
        cin>>d;
        newNode->data = d;
        newNode->next = NULL;
        newNode->prev = NULL;

        if(head == NULL){
            head = temp = newNode;
        }else{
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }

        cout<<"Do you want to continue...? 1/0: ";
        cin>>choice;
    }
}

void displayList(){
    struct Node *temp;

    if(head == NULL){
        cout<<"List is empty!"<<endl;
    }else{
        temp = head;
        cout<<"List: ";
        while (temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}

int main(){
    while (1){
        cout<<"opt-1: create doubly linked list"<<endl;
        cout<<"opt-2: display doubly linked list"<<endl;
        cout<<"Enter your option: ";
        int opt;
        cin>>opt;

        if(opt == 1){
            createList();
        }else if(opt == 2){
            displayList();
        }else{
            break;
        }
    }
    
    return 0;
}