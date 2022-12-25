#include <bits/stdc++.h>
using namespace std;

// recursion relation is :      f(n)= f(n-1) + f(n-2) ,when n>1
// 1st base condition is :      f(n)=0 , when n=0 
// 2nd base condition is :      f(n)=1 , when n=1

int fibon(int n){
    if(n==0)
        return 0;
    else if(n==1 || n==2)
        return 1;
    else
        return (fibon(n-1) + fibon(n-2));
}

int main(){
    int n;
    cout<<"Fibonacci series"<<endl;
    cout<<"enter number of series you want: ";
    cin>>n;
    for(int i=0; i<=n;i++){
        cout<<fibon(i)<<" ";
    }

    return 0;
}   