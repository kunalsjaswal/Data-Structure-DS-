#include<iostream>
using namespace std;
#define MAX 10
int Q[MAX], rear=-1, front=-1;
    
void enqueue(int val){
    if(rear==9){
        cout<<"queue if full. wait"<<endl;
        return;
    }
    if(front==-1){
        Q[0]=val;
        rear++;
        front++;
        return;
    }
    Q[rear+1]=val;
    rear++;
    return;
}

void shiftLeft(int i){
    if(i<rear){
        Q[i]=Q[i+1];
        shiftLeft(i+1);
    }
    return;
}
void dequeue(){
    if(front==-1){
        cout<<"queue is empty. cannot remove."<<endl;
        return;
    }
    if(front==rear){
        front=-1;
        rear=-1;
    }
    shiftLeft(front);
    rear--;
    return;
}
void show_front(){
    if(front==-1){
        cout<<"queue is empty"<<endl;
        return;
    }
    cout<<"front element: "<<Q[front]<<endl;
}
void display(){
    if(front==-1){
        cout<<"queue is empty"<<endl;
        return;
    }
    cout<<"front-> ";
    for(int i=0;i<=rear;i++){
        cout<<Q[i]<<" ";
    }
    cout<<"<- rear"<<endl;
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();
    dequeue();
    display();
    enqueue(70);
    display();
    show_front();
    return 0;
}