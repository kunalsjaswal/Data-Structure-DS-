#include<iostream>
#include<list>
#include<queue>
using namespace std;

void insert_edge(list<int> Gr[],int node){
    int u,v;
    cout<<"Enter start node: ";
    cin>>u;
    cout<<"Enter ending node: ";
    cin>>v;

    Gr[u].push_back(v);
    Gr[v].push_back(u);
}

void display(list<int> Gr[],int n){
    for(int i=0;i<n;i++){
        cout<<i<<"-> ";
        for(auto val:Gr[i]){
            cout<<val<<" ";
        }
        cout<<endl;
    }
}

void BST(list<int> Gr[],int start,int size){

    queue<int> Q;
    int visited[size]={0}; 
    visited[start]=1;
    int u;

    cout<<start;
    Q.push(start);

    while(!Q.empty()){
        u=Q.front();
        Q.pop();

        for(auto val: Gr[u]){
            if(visited[val] == 0){
                Q.push(val);
                cout<<","<<val;
                visited[val]=1;
            }
        }
    }

}

int main(){
    int nodes,edges;

    cout<<"enter total nodes: ";
    cin>>nodes;
    cout<<"Enter total edges: ";
    cin>>edges;

    list<int> Gr[nodes];
    for(int i=0;i<edges;i++){
        insert_edge(Gr,nodes);
    }

    display(Gr,nodes);

    //  ## Coding for BST

    int start_node;
    cout<<"Starting node: ";
    cin>>start_node;

    BST(Gr,start_node,nodes);
    return 0;
}

