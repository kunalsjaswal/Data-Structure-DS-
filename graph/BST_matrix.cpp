#include<iostream>
#include<queue>
using namespace std;
int Gr[10][10];

// ##### code for creating graph
void insert_edge(int start,int end){
    Gr[start][end]=1;
    Gr[end][start]=1;
}

void display_graph(int n){
    cout<<"    ";
    for(int k=0;k<n;k++){
        cout<<k<<" ";
    }
    cout<<endl<<"    ";
    for(int k=0;k<n;k++){
        cout<<"__";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<i<<"  |";
        for(int j=0;j<n;j++){
            cout<<Gr[i][j]<<" ";
        }
        cout<<endl;
    }

}

void BST(int,int);

int main(){


int nodes,edges;
cout<<"total nodes: ";
cin>>nodes;
cout<<"total edges: ";
cin>>edges;
cout<<"your nodes in graph are from 0 to "<<nodes<<". please enter in-between."<<endl;

while(edges!=0){
    int start,end;
    cout<<"starting node: ";
    cin>>start;
    cout<< "ending node: ";
    cin>>end;

    insert_edge(start,end);
    
    edges--;
}
display_graph(nodes);


//  #####   code for BST

int start_vertex;
cout<<endl<<"starting vertex for BST: ";
cin>>start_vertex;
BST(start_vertex,nodes);

}

void BST(int vertex,int size){
    queue<int> Q;
    int visited[size]={0};
    int u;

    Q.push(vertex);
    cout<<"BST order for starting vertex as : "<<vertex<<": "<<vertex;
    visited[vertex]=1;

    while(!Q.empty()){
        u=Q.front();
        Q.pop();

        for(int i=0;i<size;i++){
            if(Gr[u][i]==1 && visited[i]==0){
                cout<<','<<i;
                visited[i]=1;
                Q.push(i);
            }
        }

    }
}