#include<iostream>
using namespace std;

void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
}

void reverse_arr(int *arr,int i,int j){
    while(i<j){
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
        return reverse_arr(arr,i+1,j-1);
    }
}

void print_arr(int *arr){
    cout<<"[ ";
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i];
        if(i!=8){
            cout<<" ,";
        }
    }
    cout<<" ]"<<endl;
}
int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9};
    print_arr(arr);
    reverse_arr(arr,0,8);
    print_arr(arr);
    
}