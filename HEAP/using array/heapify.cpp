#include<iostream>
#include<vector>

using namespace std;

// heapify is to convert binary tree to max / min heap 

vector<int> heapify(vector<int> &tree,int ptr,int size){
    int R=(ptr+1)*2;
    int L=R-1;

    if(L > size){
        return tree;
    }
    if(R>size && L<=size){
        if(tree[ptr]<tree[L]){
            swap(tree[ptr],tree[L]);
            ptr=L;
            heapify(tree,ptr,size);
        }
        return tree;
    }

    int maxC=tree[L]>tree[R]?L:R;
    if(tree[ptr]<tree[maxC]){
        swap(tree[ptr], tree[maxC]);
        ptr=maxC;

        heapify(tree,ptr,size);
    }
    return tree;
    
}

void print(vector<int> tree){
    for(int val: tree){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> tree{10,23,6,34,9,7,13,19};

   cout<<"Binary tree: ";
   print(tree);

    for(int i=tree.size()-1; i>=0; i--){
        tree=heapify(tree,i,tree.size()-1);
    }      

   cout<<"max_heap: ";
   print(tree);
   return 0;
}