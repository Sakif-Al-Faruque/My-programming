//creation and traversal with tail
//insertion
//deletion
//reverse traversal
#include <iostream>
#include <cstdlib>

using namespace std;

int counter = 0;

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void createList(){
    int choice = 1;
    
    while (choice)
    {
        cout<<"Enter Your Data: ";
        int d;
        cin>>d;
        struct Node *newNode;
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = d;
        newNode->prev = NULL;
        newNode->next = NULL;

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }

        counter++;
        cout<<"Want to continue...? 1/0: ";
        cin>>choice;
    }
}

void displayList(){
    struct Node *temp;
    temp = head;

    cout<<"List has "<<counter<<" elements"<<endl;
    cout<<"List: ";
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtBeginning(int d){
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = d;
    newNode->prev = NULL;
    newNode->next = head;
    head = newNode;

    counter++;
    cout<<"Element is inserted"<<endl;
}

void insertAtEnd(int d){
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = d;
    newNode->prev = tail;
    tail->next = newNode;
    newNode->next = NULL;
    tail = newNode;

    counter++;
    cout<<"Element is inserted"<<endl;
}

void insertAtPosition(int d, int position){
    if(position > counter){
        cout<<"Invalid Position"<<endl;
    }else{
        int i=1;
        struct Node *newNode, *temp;

        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = d;
        temp = head;

        while (i < position){
            temp = temp->next;
            i++;
        }
        
        temp->prev->next = newNode;
        newNode->prev = temp->prev;
        newNode->next = temp;
        temp->prev = newNode;

        counter++;
        cout<<"Element is inserted"<<endl;
    }
}

void insertAfterPosition(int d, int position){
    if(position > counter){
        cout<<"Invalid Position"<<endl;
    }else{
        int i=1;
        struct Node *newNode, *temp;

        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = d;
        temp = head;

        while (i < position){
            temp = temp->next;
            i++;
        }
        
        temp->next->prev = newNode;
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;

        counter++;
        cout<<"Element is inserted"<<endl;
    }
}

void deleteFromBeginning(){
    struct Node *deletedNode = head;

    head = deletedNode->next;
    deletedNode->next->prev = NULL;
    free(deletedNode);

    counter--;
    cout<<"Element is deleted"<<endl;
}

void deleteFromEnd(){
    struct Node *deletedNode = tail;

    tail = deletedNode->prev;
    tail->next = NULL;
    free(deletedNode);

    counter--;
    cout<<"Element is deleted"<<endl;
}

void deleteFromPosition(int position){
    if(position > counter){
        cout<<"Invalid position"<<endl;
    }else{
        int i=1;
        struct Node *deletedNode = head;

        while(i < position){
            deletedNode = deletedNode->next;
            i++;
        }

        deletedNode->prev->next = deletedNode->next;
        deletedNode->next->prev = deletedNode->prev;
        free(deletedNode);

        counter--;
        cout<<"Element is deleted"<<endl;
    }
}

void reverseDisplay(){
    struct Node *temp = tail;

    cout<<"Reverse List: ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

int main(){
    while (1)
    {
        cout<<"opt-1 create list"<<endl;
        cout<<"opt-2 traverse list"<<endl;
        cout<<"opt-3 insert into list"<<endl;
        cout<<"opt-4 delete from list"<<endl;
        cout<<"opt-5 reverse list"<<endl;
        int opt;
        cout<<"Enter your option: ";
        cin>>opt;

        if(opt == 1){
            createList();
        }else if(opt == 2){
            displayList();
        }else if(opt == 3){
            cout<<"i-1 insert at begininng"<<endl;
            cout<<"i-2 insert at end"<<endl;
            cout<<"i-3 insert at specific position"<<endl;
            cout<<"i-4 insert after specific position"<<endl;
            int subopt;
            cout<<"Your choice: ";
            cin>>subopt;

            if(subopt == 1){
                int d;
                cout<<"Enter your data to insert: ";
                cin>>d;

                insertAtBeginning(d);
            }else if(subopt == 2){
                int d;
                cout<<"Enter your data to insert: ";
                cin>>d;

                insertAtEnd(d);
            }else if(subopt == 3){
                int d, p;
                cout<<"Enter your data and position to insert: ";
                cin>>d>>p;

                insertAtPosition(d, p);
            }else if(subopt == 4){
                int d, p;
                cout<<"Enter your data and position to insert: ";
                cin>>d>>p;

                insertAfterPosition(d, p);
            }
        }else if(opt == 4){
            cout<<"d-1 delete from begininng"<<endl;
            cout<<"d-2 delete from end"<<endl;
            cout<<"d-3 delete from specific position"<<endl;
            int subopt;
            cout<<"Your choice: ";
            cin>>subopt;

            if(subopt == 1){
                deleteFromBeginning();
            }else if(subopt == 2){
                deleteFromEnd();
            }else if(subopt == 3){
                int p;
                cout<<"Enter your position to delete: ";
                cin>>p;

                deleteFromPosition(p);
            }
        }else if(opt == 5) {
            reverseDisplay();
        }else{
            break;
        }
    }
    
    return 0;
}