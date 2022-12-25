#include<iostream>
using namespace std;

class node{
    public:
     int data;
     node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }
};




void insert(node* &head,int val,int size){
    node* n=new node(val);
    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n;
    if(val==size){
        n->next=head;
        return;
    }

}

void display(node* head){
    node* temp=head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}

int josephus_prblm(int size,int k,node* &head){
    int count=0;
    int res;

    node* temp=head;
    while(size!=1){
        

        if(count==k-1){
            if(temp->data!=0){
                temp->data=0;
                count=0;
                size--;
            }
            
        }else{
            if(temp->data!=0){
                count++;
            }
        }
        temp=temp->next;
    }

    node* temp2=head;
    while(temp2->next!=head){
        if(temp2->data!=0){
            res=(temp2->data);
            break;
        }
        temp2=temp2->next;
    }
    return res;

}

int main(){
    int size,k;
    cout<<"enter total people in circle: ";
    cin>>size;
    cout<<"enter K(eliminating kth person):";
    cin>>k;

    node* head=new node(1);

    for(int i=1;i<size;i++){
        insert(head,i+1,size);
    }
    
    cout<<josephus_prblm(size,k,head)<<" is the winner";
      
    return 0;
}