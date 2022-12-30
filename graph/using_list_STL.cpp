//  using array of list
#include<bits/stdc++.h>
using namespace std;

void display(list<int> Gr[],int v){
    for(int i=0;i<v;i++){

        cout<<i<<"-> ";
        for(auto val:Gr[i]){
            cout<<val<<" ";
        }
        cout<<endl;
    }
}
void add_edge(list<int> Gr[]){
    int u,v;
    cin>>u>>v;

    Gr[u].push_back(v);
    Gr[v].push_back(u);
}

int main(){

    int v,e;
    cin>>v>>e;
    list<int> Gr[v]; 

    for(int i=0;i<e;i++){
        add_edge(Gr);
    }
    cout<<"adjacency List: "<<endl;
    display(Gr,v);
}