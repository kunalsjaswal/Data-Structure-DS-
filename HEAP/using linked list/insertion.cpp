#include<iostream>
using namespace std;

class node{
public:
    node* left;
    node* right;
    int data;

    node(int val){
        left=NULL;
        right=NULL;
        data=val;
    }
};

node* insert(node* root,int val){
    if(root==NULL){
        return new node(val);
    }

    if(root->left==NULL){
        root->left=insert(root->left,val);
    }else if(root->right==NULL){
        root->right=insert(root->right,val);
    }
}

int main(){
// insertin these element to build a max heap 
int arr[8]={45,36,54,27,63,72,61,18};

node* heap=new node(45);

for(int i=1;i<8;i++){
    insert(heap,arr[i]);
}

}