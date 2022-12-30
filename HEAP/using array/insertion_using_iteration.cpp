#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>& heap,int val){
    heap.push_back(val);
    
    // 1. it is root node then leave
    if(heap.size()==1){
        return;
    }

    // 2. if child then compare with root node
    // i.e., how to find root? - (i/2) 
    // if heap[i/2] < heap[i] => swap()

    int i=heap.size()-1;

    while(i!=0){
        int root=(i-1)/2;
        if(heap.at(root) <  heap.at(i)){
            swap(heap[i],heap[root]);
            i=root;
        }else{
            return;
        } 
    }

}

void fix_heap(vector<int>& heap,int size){

    int ptr=0;

    while(true){
        // initializing right and left child
        int R=(ptr+1)*2;
        int L=R-1;

        // checking if node contains atleast one child 
        if(L>size){
            return;    // exits
        }

        // checking if the values of atleast one child node is smaller than the root node 
        if(heap[ptr]>=heap[L] && heap[ptr]>=heap[R]){

            return;
        }

        if(R>size){
            if(heap[L]<heap[ptr]){
                return;
            }
                swap(heap[ptr],heap[L]);
                ptr=L;
        }else{
                int big=heap[L]>heap[R]?L:R;
                swap(heap[ptr],heap[big]);
                ptr=big;
        }


    }
}

// if we are keeping the elements after deletion at the end of the heap then it is called heap sort. as coded below

void deleteHeap(vector<int>& heap){
    int size=heap.size()-1;

/*
50 20 30 10 5
i           (size)
1. swap 1st and last element of heap
*/

    while(size!=0){
        swap(heap[0],heap[size]);
        size--;
        fix_heap(heap,size);
    }

        // swap(heap[0],heap[size]);
        // size--;
        // fix_heap(heap,size);

        cout<<"after deleting: ";
        for(int i=0;i<=size;i++){
            cout<<heap[i]<<" ";
        }
        cout<<" | ";
        for(int i=size+1;i<heap.size();i++){
            cout<<heap[i]<<" ";
        }   
}

void print(vector<int> heap){
   for(int node: heap){
    cout<<node<<" ";
   }
   cout<<endl;
}
int main(){

    vector<int> max_heap;
    insert(max_heap,45);
    insert(max_heap,36);
    insert(max_heap,54);
    insert(max_heap,27);
    insert(max_heap,63);
    insert(max_heap,72);
    insert(max_heap,61);
    insert(max_heap,18);

   
    print(max_heap);
    deleteHeap(max_heap);
    return 0;
}