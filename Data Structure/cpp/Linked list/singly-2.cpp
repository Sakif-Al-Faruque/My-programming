//insertion
//deletion
#include <iostream>
#include <cstdlib>

using namespace std;

int counter = 0;
struct Node{
    int data;
    struct Node *next;
} *newnode;

Node *head = NULL;
Node *temp = NULL;

void insertAtFirst(int d){
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = d;
    newnode->next = head;
    head = newnode;

    cout<<"Element inserted at first"<<endl;
    counter++;
}

void insertAfterPosition(int d, int position){
    int i = 1;
    temp = head;

    if(position > counter){
        cout<<"Invalid Position"<<endl;
    }else{
        while(i < position){
            temp = temp->next;
            i++;
        }
        newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->data = d;
        newnode->next = temp->next;
        temp->next = newnode;
        counter++;
    }
}

void insertAtLast(int d){
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = d;
    newnode->next = NULL;

    temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;

    cout<<"Element inserted at end"<<endl;
    counter++;
}

void deleteFromBeginning(){
    struct Node *deletedNode;
    deletedNode = head;
    head = deletedNode->next;
    free(deletedNode);

    counter--;
    cout<<"Node has been deleted"<<endl;
}

void deleteFromLast(){
    /* struct Node *prevNode, *deletedNode;
    prevNode = deletedNode = head; */

    struct Node *prevNode;
    prevNode = head;

    /* while (deletedNode->next != NULL){
        prevNode = deletedNode;
        deletedNode = deletedNode->next;
    }
    prevNode->next = NULL;
    free(deletedNode); */

    while (prevNode->next->next != NULL){
        prevNode = prevNode->next;
    }
    free(prevNode->next);
    prevNode->next = NULL;

    cout<<"Node has been deleted"<<endl;
    counter--;
}

void deleteFromSpecifiedPosition(int position){
    int i=1;
    //struct Node *prevNode, *deletedNode;
    struct Node *prevNode;

    prevNode = head;

    while (i < (position-1)){
        prevNode = prevNode->next;
        i++;
    }

    /* deletedNode = prevNode->next;
    prevNode->next = deletedNode->next;
    free(deletedNode); */

    prevNode->next = prevNode->next->next;

    counter--;
    
    
}

int main(){
    int opt;
    
    while(1){
        cout<<"1-create nodes"<<endl;
        cout<<"2-traverse nodes"<<endl;
        cout<<"3-insert nodes"<<endl;
        cout<<"4-delete nodes"<<endl;
        cout<<"Enter your option: ";
        cin>>opt;

        if(opt == 1){
            int d;
            cout<<"Enter your data: ";
            cin>>d;

            newnode = (struct Node*)malloc(sizeof(struct Node));
            newnode->data = d;
            newnode->next = NULL;

            if(head == NULL){
                head = temp = newnode;
            }else{
                temp->next = newnode;
                temp = newnode;
            }
            counter++;
        }else if(opt == 2){
            temp = head;
            cout<<"Data: ";
            while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
            cout<<"Total data: "<<counter<<endl;

        }else if(opt == 3){
            int subopt;
            cout<<"1-insert at first"<<endl;
            cout<<"2-insert at end"<<endl;
            cout<<"3-insert after a position"<<endl;
            cout<<"Enter your option: ";
            cin>>subopt;

            if(subopt == 1){
                int d;
                cout<<"Enter your data: ";
                cin>>d;

                insertAtFirst(d);
            }else if(subopt == 2){
                int d;
                cout<<"Enter your data: ";
                cin>>d;

                insertAtLast(d);
            }else if(subopt == 3){
                int d, k;
                cout<<"Enter your data: ";
                cin>>d;
                cout<<"Enter your position: ";
                cin>>k;

                insertAfterPosition(d, k);
            }else{
                cout<<"Wrong option"<<endl;
            }
        }else if(opt == 4){
            int subopt;
            cout<<"1-delete from first"<<endl;
            cout<<"2-delete from end"<<endl;
            cout<<"3-delete from a position"<<endl;
            cout<<"Enter your option: ";
            cin>>subopt;

            if(subopt == 1){
                deleteFromBeginning();
            }else if(subopt == 2){
                deleteFromLast();
            }else if(subopt == 3){
                int j;
                cout<<"Enter your position: ";
                cin>>j;
                
                deleteFromSpecifiedPosition(j);
            }else{
                cout<<"Wrong option"<<endl;
            }
        }else{
            break;
        }
    }
    return 0;
}