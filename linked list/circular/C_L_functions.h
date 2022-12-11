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

void insert_At_Tail(Node* &head,int val){
    Node* n=new Node(val);

    if(head==NULL){
        head=n;
        n->next=head;
        return;
    }

    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    return;
}

void insert_At_Head(Node* &head,int val){
    Node* n=new Node(val);

    if(head==NULL){
        head=n;
        n->next=head;
        return;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }

    temp->next=n;
    n->next=head;
    head=n;
    return;
}


int list_Length(Node* head){

    if(head==NULL){
        return 0;
    }
    int i=0;
    Node* temp=head;
    do
    {   
        temp=temp->next;
        i++;
    } while (temp!=head);
    
    return i;

}

void Insert_At_Index(Node* &head,int val , int index){
    int len=list_Length(head);
    if(index>len-1){
        cout<<"index out of bound exception"<<endl;
        return;
    }

    Node* n=new Node(val);
    Node* temp=head;   

    for(int i=1;i<index;i++){
        temp=temp->next;
    }

    n->next=temp->next;
    temp->next=n;
    return;
}

void print_Circular_List(Node* head){
    
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


