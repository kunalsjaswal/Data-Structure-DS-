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
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);

    root->left->left=new Node(4);

    /*
            1
          2   3
        4 
    */
   inorder(root);

    return 0;
}