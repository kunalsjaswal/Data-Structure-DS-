#include "basicFunctions.h"

void reverse_list(Node* &head){
    Node *curr=head;
    Node *prev=NULL;
    Node *next=NULL;



    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    head=prev;
    return;

}

int main(){
    Node* head=NULL;

    int arr[7]={1,2,3,4,5,6,7};
    for(int val: arr){
        insertAtTail(head,val);
    }
    display(head);

    reverse_list(head);
    display(head);
}