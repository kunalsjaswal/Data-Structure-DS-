#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<string> s;

    s.push("Bottom");
    s.push("Middle");
    s.push("Top");

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    
    return 0;
}