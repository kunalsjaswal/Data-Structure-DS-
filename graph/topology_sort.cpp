#include<iostream>
#include<queue>
#include<list>
using namespace std;

list<int> Graph[7];
queue<int> Q;
int in_degree[7]={0};

void indegree(){
    for(int i=0;i<7;i++){
        for(auto val: Graph[i]){
            in_degree[val]+=1;
        }
    }
}

void TP_sort(){
for(int i=0;i<7;i++){
    if(in_degree[i]==0){
        Q.push(i);
    }
}

while(!Q.empty()){
    int x=Q.front();
    Q.pop();
    cout<<x<<" ";
    for(auto val:Graph[x]){
        in_degree[val]--;

        if(in_degree[val]==0){
            Q.push(val);
        }
    }
}
}


int main(){
    Graph[0].push_back(1);
    Graph[0].push_back(2);

    Graph[1].push_back(2);
    Graph[1].push_back(5);

    Graph[2].push_back(3);
    
    Graph[5].push_back(3);
    Graph[5].push_back(4);
   
    Graph[6].push_back(1);
    Graph[6].push_back(5);


    indegree();
    TP_sort();
    
}