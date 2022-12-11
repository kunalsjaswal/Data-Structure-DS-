#include<iostream>
using namespace std;

int main(){
    int *ptr_arr[5];  
    // here we declared 5 pointer (array of pointer) pointing toward 5 integers 

    int a=1, b=2, c=3, d=4, e=5;
    ptr_arr[0]=&a;
    ptr_arr[1]=&b;
    ptr_arr[2]=&c;
    ptr_arr[3]=&d;
    ptr_arr[4]=&e;



    return 0;
}