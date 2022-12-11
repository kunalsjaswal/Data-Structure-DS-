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

void insert_To_Tail(Node* &head ,int val){

    Node* n=new Node(val);
    if(head==NULL){
        n->next=NULL;
        n->prev=NULL;
        head=n;
        return;
    }
    Node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }   
    temp->next=n;
    n->prev=temp;
    n->next=NULL;
    return;
}

void insert_To_Head(Node* &head,int val){
    Node* n=new Node(val);

    if(head==NULL){
        n->next,n->prev=NULL;
        head=n;
        return;
    }

    n->next=head;
    head->prev=n;
    n->prev=NULL;

    head=n;
    return;
}

void insert_At_Index(Node* &head,int val,int index){
    Node* n=new Node(val);

    Node* temp=head;
    for(int i=1;i<index;i++){
        temp=temp->next;
    }
    if(temp== NULL || temp->next==NULL){
        cout<<"Index out of range exception"<<endl;
        return;
    }

    n->next=temp->next;
    temp->next->prev=n;
    temp->next=n;
    n->prev=temp;

    return;
}

int list_size(Node* head){
    
    if(head==NULL){
        return 0;
    }
    
    int i=0;
    while(head!=NULL){
        head=head->next;
        i++;
    }

    return i;

}

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
    return;

}