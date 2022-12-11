#include<iostream>
using namespace std;

class Node{
    public:
     int data;
     Node* next;
     Node* prev;

     Node(int val){
        data=val;
     }
};

void print_List(Node* head){
        
    if(head==NULL){
        cout<<"Empty List"<<endl;
        return;
    }

    cout<<"(NULL) <- ";
    while(head->next!=NULL){
        cout<<head->data<<" <=> ";
        head=head->next;
    }
    cout<<head->data<<" -> (NULL)"<<endl;
}

int main(){

    Node* head=new Node(1);
    head->prev=NULL;
    Node* two=new Node(2);
    Node* three=new Node(3);
    head->next=two;
    two->prev=head;
    two->next=three;
    three->prev=two;
    three->next=NULL;


    print_List(head);


}