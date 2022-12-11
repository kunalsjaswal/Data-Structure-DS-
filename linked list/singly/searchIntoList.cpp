#include "basicFunctions.h"



// searching into linked list
void search(Node* head,int val){
    
    int i=1;
    while(head!=NULL){
        if(head->data == val){
            cout<<"Yes, your element is present at position(starting from 1) "<<i<<endl;
            return;
        }
        head=head->next;
        i++;
    }
    cout<<"your element is not present"<<endl;
    return;
}

int main(){
    
    Node* head=NULL;
    insertAtHead(head,2);
    insertAtHead(head,1);

    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);

    insertAtIndex(head,10,3);
    display(head);

    
    search(head,51);
    return 0;


}