//node creation and traverse
#include <iostream>
#include <cstdlib>

using namespace std;

struct Node {
    int data;
    struct Node *next;
};

int main(){
    int choice;
    struct Node *head, *newnode, *temp;
    head = NULL;

    while (1){
        
        cout<<"Adding node-1"<<endl;
        cout<<"Node traversal-2"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        if(choice == 1){
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
        }else if(choice == 2){
            cout<<"Node Elements: "<<endl;
            temp = head;
            while (temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }else{
            break;
        }
    }
    return 0;
}