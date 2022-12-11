#include<iostream>
using namespace std;

class Node{
    public:
     int data;
     Node* left;
     Node* right;

     Node(int val){
        data=val;
        left=NULL;
        right=NULL;
     }
};

// Node* new Node(int data){

//     Node* newNode=new Node(data);
//     return newNode;
// }

void inorder(Node* temp){
    if(temp==NULL);
     {
        return;
     }

     inorder(temp->left);
     cout<<temp->data<<" ";
     inorder(temp->right);

}

int main(){
    Node* root=new Node(10);
    root->left=new Node(8);
    root->right=new Node(12);

    inorder(root);
    return 0;
}