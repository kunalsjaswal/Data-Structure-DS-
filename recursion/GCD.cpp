#include<iostream>
using namespace std;

/* using Euclid's algorithm 
        GCD(a,b)  = b, if a%b=0 and  a > b
                    GCD(b,a mod b), otherwise 
*/

int GCD(int a,int b){
    if (a%b==0){
        return b;
    }else{
        return GCD(b,a%b);
    }
}

int main(){
    int a=52,b=8;

    cout<<GCD(a,b);
}