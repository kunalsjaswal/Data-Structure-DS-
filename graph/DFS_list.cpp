#include<iostream>
#include<stack>
#include<list>
using namespace std;
stack<int> st;
int visited[7]={0};
list<int> gr[7];

void DFS(int start){

    if(visited[start] == 0){
        cout<<start<<" ";
        visited[start]=1;
    }

    for(auto val:gr[start]){
        if(visited[val]==0){
            st.push(start);
            DFS(val);
            return;
        }
    }

    if(st.empty()){
        return;
    }

    int topEl=st.top();
    st.pop();
    DFS(topEl);

}

int main(){

    gr[0].push_back(1);
    gr[0].push_back(3);
    gr[0].push_back(6);

    gr[1].push_back(0);
    gr[1].push_back(4);
    gr[1].push_back(5);

    gr[2].push_back(5);

    gr[3].push_back(0);
    gr[3].push_back(5);

    gr[4].push_back(1);
    gr[4].push_back(6);

    gr[5].push_back(1);
    gr[5].push_back(2);
    gr[5].push_back(3);

    gr[6].push_back(0);
    gr[6].push_back(4);


    DFS(1);
    return 0;
}