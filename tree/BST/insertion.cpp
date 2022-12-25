#include<iostream>
using namespace std;

class tree{
public:
 tree* left;
 tree* right;
 int data;

 tree(int val){
    data=val;
    left=NULL;
    right=NULL;
 }
};

tree* insert_into_BST(tree* root,int val){
    if(root==NULL){
        return new tree(val);
    }
    if(val<=root->data){
        root->left= insert_into_BST(root->left,val);
    }else{
        root->right= insert_into_BST(root->right,val);
    }
}

void inorder(tree* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(tree* root){
    if (root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";    
}

void preorder(tree* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int search(tree* root,int val){

    if(root == NULL){
        return 0;
    }
    if(root->data == val){
        return 1;
    }

    if(val<root->data){
        search(root->left,val);
    }else{
        search(root->right,val);
    }
}

int main(){

    tree* root=new tree(5);
    insert_into_BST(root,3);
    insert_into_BST(root,8);
    insert_into_BST(root,4);
    insert_into_BST(root,6);
    cout<<"inorder: ";
    inorder(root);
    cout<<endl<<"postorder: ";
    postorder(root);
    cout<<endl<<"preorder: ";
    preorder(root);


    cout<<endl<<search(root,6);
    return 0;
}