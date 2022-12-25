#include <bits/stdc++.h>
using namespace std;

void pattrn(int num){
    if(num<1)
        return;
    else
        cout<<num<<" ";
        pattrn(num-1);
        cout<<num<<" ";
        return;
}

int main(){
    pattrn(4);
}