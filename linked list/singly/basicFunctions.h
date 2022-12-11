#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }

};



void insertAtHead(Node* &head,int val){
    
    Node* node=new Node(val);

    node->next=head;
    head=node;
    return;
}

void insertAtTail(Node* &head,int val){
    Node* node=new Node(val);

    if(head==NULL){
        head=node;
        return;
    }

    Node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=node;
    return;
}

void insertAtIndex(Node* &head,int val,int index){

    Node* node=new Node(val);

    Node* temp=head;
    for (int i = 1; i < index; i++)
    {
        temp=temp->next;
    }
    
    try
    {
        if(temp==NULL){
            throw temp;
        }

        node->next=temp->next;
        temp->next=node;
        return;
    }
    catch(...)
    {
        cerr << "Out of bound exeption occured" << '\n';
    }
    
    
}

void display(Node* head){
    
    if(head==NULL){
        cout<<"Empty List"<<endl;
        return;
    }
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"null"<<endl;
}

int findLength(Node* head){
    int i=0;
    while(head!=NULL){
        head=head->next;
        i++;
    }

    return i;
}