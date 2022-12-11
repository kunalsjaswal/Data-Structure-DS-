#include<bits/stdc++.h>
using namespace std;

class node{
 public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
    }
};
class stackS{
    public:
    int top=-1;
    node* bottom=NULL;
    node* head=NULL;
   
    void push(int val){
        node* n=new node(val);
        if(top==-1){
            n->next=NULL;
            n->prev==NULL;
            bottom=n;
            head=n;
            top++;
            return;
        }
        n->prev=head;
        n->next=NULL;
        head->next=n;
        head=n;
        top++;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        node* temp=head;
        head=head->prev;
        temp->prev=NULL;
        head->next=NULL;
        top--;
    }

    void peek(){
        cout<<"top element: "<<head->data<<endl;
    }

    void print(){
        node* temp=head;
        cout<<"___"<<endl;
        for(int i=0;i<=top;i++){
            cout<<temp->data<<endl<<"___"<<endl;
            temp=temp->prev;
        }

    }
};


template<typename K> class nodeTemp{
    public:
    K data;
    nodeTemp* next;
    nodeTemp* prev;

    nodeTemp(K val){
        data=val;
    }
};

template<typename T> class stackTemp{
public:
int top=-1;
nodeTemp<T> *bottom=NULL; 
nodeTemp<T> *head=NULL;


void push(T val){
     nodeTemp<T> *n=new nodeTemp<T>(val);
        if(top==-1){
            n->next=NULL;
            n->prev==NULL;
            bottom=n;
            head=n;
            top++;
            return;
        }
        n->prev=head;
        n->next=NULL;
        head->next=n;
        head=n;
        top++;
}
    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        nodeTemp<T> *temp=head;
        head=head->prev;
        temp->prev=NULL;
        head->next=NULL;
        top--;
    }

    void peek(){
        cout<<"top element: "<<head->data<<endl;
    }
void print(){
        nodeTemp<T> *temp=head;
        cout<<"___"<<endl;
        for(int i=0;i<=top;i++){
            cout<<temp->data<<endl<<"___"<<endl;
            temp=temp->prev;
        }

    }

};


int main(){
    // stackS st;
    // st.push(5);
    // st.push(6);
    // st.push(9);
    // st.push(13);
    // st.push(87);
    // st.pop();
    // st.push(20);
    // st.pop();
    // st.pop();
    // st.print();
    // st.peek();

    stackTemp<string> st2;
    st2.push("hello");
    st2.push("my");
    st2.push("name");
    st2.push("is");
    st2.push("kunal");
    st2.pop();
    st2.print();
    st2.peek();
    return 0;
}

