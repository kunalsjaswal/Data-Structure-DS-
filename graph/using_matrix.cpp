#include<iostream>
#include<vector>
using namespace std;

int adjMatrix[20][20];

void display(int v){
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void add_adge(){
    int i, j;
    cin>>i>>j;
    adjMatrix[i][j]=1;
    adjMatrix[j][i]=1;
}
int main(){
//  v- total vertix
//  m- total edges

int v,m;
cin>>v>>m;

for(int i=0;i<m;i++){
    add_adge();
}

display(v);
    
}