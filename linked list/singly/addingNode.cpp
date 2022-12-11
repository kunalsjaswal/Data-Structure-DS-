#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

};

// insert at end 
void insertAtTail(Node **n, int val)
{
    Node *new_node = new Node();
    new_node->data = val;
    new_node->next = NULL;


    if (*n == NULL)
    {
        *n = new_node;
        return;
    }

    Node *last=*n;
    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    
    return;
}

// insert at head 
void insertAtHead(Node** head,int val){

    Node* new_node=new Node();
    new_node->data=val;
    new_node->next=*head;
    *head=new_node;
    return;
}

// insert at any index 
void insertAtIndex(Node** head,int val,int index){

    Node* new_node=new Node();
    new_node->data=val; 
    
    Node *temp=*head;
    for(int i=1;i<index;i++){
        temp=temp->next;
    }

    try
    {
        if(temp==NULL){
            throw temp;
        }

        new_node->next=temp->next;
        temp->next=new_node;
        return;
        
    }
   
    catch(...)
    {
        cout<<"exception: out of bound exception occured"<<endl;
        return;
    }
}


// traversing linked list
void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << "->";
        n = n->next;
    }
    cout << "NULL"<<endl;
}

int main()
{
    Node* head=NULL;
    insertAtTail(&head, 2);
    insertAtTail(&head, 3);
    insertAtTail(&head, 4);
    printList(head);

    insertAtHead(&head,1);
    insertAtHead(&head,0);
    printList(head);

    insertAtIndex(&head,10,2);
    printList(head);

    return 0;
}