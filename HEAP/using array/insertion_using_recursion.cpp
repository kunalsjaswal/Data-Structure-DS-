#include<bits/stdc++.h>
using namespace std;

vector<int> check(vector<int>& heap,int pos){

    if(pos==0){
        return heap;
    }

    int root=(pos-1)/2;
    if(heap[pos] > heap[root]){
        swap(heap[pos],heap[root]);
        return check(heap,root);
    }else{
        return heap;
    }
}

void print(vector<int> heap){
   for(int node: heap){
    cout<<node<<" ";
   }
}
int main(){
    vector<int> heap;
    int pos=-1;
    int arr[]={45,36,54,27,63,72,61,18};
    for(int val: arr){
        heap.push_back(val);
        pos++;
        heap=check(heap,pos);
    }
    print(heap);
}