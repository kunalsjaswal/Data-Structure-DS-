#include<bits/stdc++.h>
using namespace std;
static int arr[10]={12,23,21,43,23,45,2,3,65,5};

int sum_of_array(int size){
    if(size==-1)
        return 0;
    else 
        return (arr[size-1] + sum_of_array(size-1));
}

int main(){
    cout<<sum_of_array(10);
}