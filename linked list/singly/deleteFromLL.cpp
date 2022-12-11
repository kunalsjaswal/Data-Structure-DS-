#include "basicFunctions.h"

void deleteFromList(Node* &head,int val){
    if(head==NULL){
        cout<<"Empty Linked list. Cannot delete"<<endl;
        return;
    }

    Node* temp=head;

   // head condition 
    if(head->data == val){
        head =temp->next;
        cout<<"Element deleted succesfully"<<endl;
        return;
    }

    do{
       if(temp->next->data==val){
            temp->next=temp->next->next;
            cout<<"Element deleted succesfully"<<endl;
            return;
        }
        temp=temp->next;
    } while (temp->next!=NULL);
    

    cout<<"Element not present. Cannot delete"<<endl;
    return;

}

int main(){

    int ele[7]={1,2,3,4,5,6,7};
    Node* head=NULL;

    for(int val:ele){
        insertAtTail(head,val);
    }
    cout<<"before deleting"<<endl;
    display(head);
    cout<<"after Deleting"<<endl;
    deleteFromList(head,2);
    display(head);

    return 0;
}