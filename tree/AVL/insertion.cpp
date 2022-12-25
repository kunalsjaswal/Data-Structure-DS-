#include<iostream>
using namespace std;

class tree{
    public:
    int data,ht;
    tree* left;
    tree* right;

    tree(int val){
        data=val;
        ht=1;
        left=NULL;
        right=NULL;
    }
};

int NodeHt(tree* root){

    int hl,hr;

    hl= root && root->left ? root->left->ht:0;
    hr= root && root->right ? root->right->ht:0;


    return hl>hr?hl+1:hr+1;
}

int BalanceFactor(tree* root){
    
    int hl,hr;
    
    hl= root && root->left ? root->left->ht:0;
    hr= root && root->right ? root->right->ht:0;
    if(root==NULL){
        return 0;
    }

    return hl-hr;

}

tree* LL_Rotation(tree* root){
    tree* rootL=root->left;
    tree* rootLR=rootL->right;

    /*
               10(root)                        5(rootL)
              /       \                        /   \
          5(rootL)     50   --> LL -->        1      10(root)
           /    \                                    /   \
          1     6(rootLR)                      6(rootLR)  50  

        # ht of rootLR remain same.
        # calculate ht of root and rootL
    */

    rootL->right=root;
    root->left=rootLR; 
    
    root->ht=NodeHt(root);
    rootL->ht=NodeHt(rootL);

    return rootL;

}
tree* LR_Rotation(tree* root){
    tree* rootL=root->left;
    tree* rootLR=rootL->right;

    rootL->right=rootLR->left;   // left child of LR = right child of rootL
    root->left=rootLR->right;    // right child of LR = left child of root

    rootLR->left=rootL;
    rootLR->right=root;    

    rootL->ht=NodeHt(rootL);
    root->ht=NodeHt(root);
    rootLR->ht=NodeHt(rootLR);

    return rootLR;
}

tree* RR_Rotation(tree* root){

   tree* rootR=root->right;
   tree* rootRL=rootR->left;

   root->right=rootRL;
   rootR->left=root;

   rootR->ht=NodeHt(rootR);
   root->ht=NodeHt(root);

   return rootR;

}
tree* RL_Rotation(tree* root){

tree* rootR=root->right;
tree* rootRL=rootR->left;

root->right= rootRL->left;   // left child of rl = right child of root
rootR->left=rootRL->right;   // right child of rl = left child of rootR 

rootRL->left=root;
rootRL->right=rootR;

root->ht=NodeHt(root);
rootR->ht=NodeHt(rootR);
rootRL->ht=NodeHt(rootRL);

return rootRL;
}

tree* insert(tree* root,int val){

    if(root==NULL){
        return new tree(val);
    }

    if(val<root->data){
        root->left=insert(root->left,val);

    }else if(val>root->data){
        root->right=insert(root->right,val);
    }


    root->ht=NodeHt(root);  // updating ht of every node


    if(BalanceFactor(root)==2 && BalanceFactor(root->left) == 1){
        return LL_Rotation(root);
    }else if(BalanceFactor(root)==2 && BalanceFactor(root->left) == -1){
        return LR_Rotation(root);
    }else if(BalanceFactor(root)==-2 && BalanceFactor(root->right) == -1){
        return RR_Rotation(root);
    }else if(BalanceFactor(root)==-2 && BalanceFactor(root->right) == 1){
        return RL_Rotation(root);

    }
 
    return root;
}

void inorder(tree* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    tree* root=NULL;
    root=insert(root,5);
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,2);
    root=insert(root,15);


    inorder(root);
    return 0;
}