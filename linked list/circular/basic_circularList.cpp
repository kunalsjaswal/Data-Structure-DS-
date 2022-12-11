#include<iostream>
using namespace std;

class Node{
    public:
     int data;
     Node* next;

     Node(int val){
        data=val;
     }
};

void printList(Node* head){

    if(head==NULL){
        cout<<"Empty List"<<endl;
        return;
    }

    Node* temp =head;
    cout<<"---> ";
    do{
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }while(temp!=head);
    cout<<"head"<<endl;

}



int main(){

    Node* head=new Node(1);
    Node* two=new Node(2);
    Node* three=new Node(3);
    head->next=two;
    two->next=three;
    three->next=head;
    printList(head);
    
    return 0;
}