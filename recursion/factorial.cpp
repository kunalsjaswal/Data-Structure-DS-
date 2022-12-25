#include <bits/stdc++.h>
using namespace std;

// recursive function or recurrence relation is : f(n) = n * f(n-1) if n>0
/// base condition is:                            f(n) = 1           if n=0 (exit)

long long factorial(int x){
    if(x==0)
        return 1;
    else 
        return (x * factorial(x-1));
}

int main(){
    int n;

    cout<<"Factorial Program\n"<<"enter number: ";
    cin>>n;
    cout<<n<<"! = "<<factorial(n);

}