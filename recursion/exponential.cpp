#include<iostream>
using namespace std;

long exp(int a,int pow){

    if(pow==0){
        return 1;
    }else{
        return (a*exp(a,pow-1));
    }
} 


int main(){
    int a=2,pow=10;
    cout<<exp(a,pow);
}