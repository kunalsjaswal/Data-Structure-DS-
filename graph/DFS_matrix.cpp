#include<iostream>
#include<stack>
using namespace std;

int visited[7]={0};
int Graph[7][7]={{0,1,0,1,0,0,1},
                {1,0,0,0,1,1,0},
                {0,0,0,0,0,1,0},
                {1,0,0,0,0,1,0},
                {0,1,0,0,0,0,1},
                {0,1,1,1,0,0,0},
                {1,0,0,0,1,0,0}};
stack<int> st;

void DFS(int start){
    
    if(visited[start] == 0){
        cout<<start<<" ";
        visited[start]=1;
    }

    for(int i=0;i<7;i++){
        if(Graph[start][i]==1 && visited[i] == 0){
            st.push(start);
            DFS(i);
            return;
        }
    }
    if(st.empty()){
        return;
    }
    int stTop=st.top();
    st.pop();
    DFS(stTop);
}
int main(){
    cout<<"DFS order: ";
    DFS(4);
}