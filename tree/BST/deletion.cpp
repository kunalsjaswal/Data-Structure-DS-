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

void dlt(tree* &root){
    root=NULL;
}
void search_and_delete(tree* &root,int val);
void delete_node(tree* &root,int val);

int main(){
    tree* root=new tree(56);
    insert(root,34);
    insert(root,40);
    insert(root,78);
    insert(root,80);
    insert(root,36);
    insert(root,50);
    insert(root,60);
    insert(root,100);
    insert(root,35);
    insert(root,10);

    inorder(root);
    cout<<endl;

    search_and_delete(root,78);
    inorder(root);

    return 0;
}


void delete_node(tree* &root,int val){

    //1st-  with 0 child
    if(root->left == NULL && root->right == NULL){
        cout<<"deleting "<<root->data<<"..."<<endl;
        root=NULL;
        return;
    }
    
    //2nd-  with 1 child
    if(root->left!= NULL && root->right == NULL){
        cout<<"deleting "<<root->data<<"..."<<endl;
        root=root->left;
        return;
    }else if(root->left== NULL && root->right != NULL){
        cout<<"deleting "<<root->data<<"..."<<endl;
        root=root->right;
        return;
    }

    // 3rd- with 2 children : using inorder predecessor
    tree* temp=root->left;
    int max=temp->data;
    
    while(temp->right!=NULL){
        max=temp->right->data;
        temp=temp->right;
    }
    cout<<"deleting "<<root->data<<"..."<<endl;
    root->data=max;

    search_and_delete(root->left,max);
    return;
}
void search_and_delete(tree* &root,int val){
    if(root==NULL){
        cout<<"node not present"<<endl;
        return;           
    }
    if(val < root->data){
        search_and_delete(root->left,val);
    }else if(val > root->data){
        search_and_delete(root->right,val);
    }else if(val == root->data){
        delete_node(root,val);
    }
}



