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

tree* insert(tree* root,int val){
    if(root==NULL){
        return new tree(val);
    }

    if(val<=root->data){
        root->left=insert(root->left,val);
    }else{
        root->right=insert(root->right,val);
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
int total_nodes(tree* root){
    if(root==NULL){
        return 0;
    }else{
        return ( total_nodes(root->left) + total_nodes(root->right) + 1);
    }
}


int height(tree* root){
    int leftht,rightht;

    if(root==NULL){
        return 0;
    }
    else{
        leftht=height(root->left);
        rightht=height(root->right);

        if(leftht>rightht){
            return leftht+1;
        }else{
            return rightht+1;
        }
    }
}

int main(){
    tree* root=new tree(50);
    insert(root,20);
    insert(root,60);
    insert(root,10);
    insert(root,30);
    insert(root,70);
    insert(root,100);
    insert(root,200);

    inorder(root);
    cout<<endl;
    cout<<"total nodes: "<<total_nodes(root)<<endl;
    cout<<"height of the tree is: "<<height(root)<<endl;
    return 0;
}