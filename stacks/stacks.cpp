#include<iostream>
using namespace std;
#define MAX 10

template <typename T> class stack{
    int top;
    T arr[MAX];

    public:
    stack(){
        top=-1;
    }

    void push(T val){
        if(top==(MAX-1)){
            cout<<"Stack overflow"<<endl;
            return;
        }       
        top++;
        arr[top]=val;
        return;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }

        top--;
        return;
    }

    void peek(){
        if(top == -1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        cout<<arr[top]<<endl;
    }

    bool empty(){
        return (top==-1);
    }
};


int main(){

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()){
        s.peek();
        s.pop();
    }


    return 0;
}