#include <iostream>
using namespace std;

void displayArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void rightRotate(int arr[],int d,int n){
    int temp,a,b;

    // if rotating by 0 
    if(d==0){
        cout<<"RightRotated array: ";
        displayArray(arr,n);
    }
else{
    temp=arr[n-1];

    for (int i = n-1; i >0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    d--;
    rightRotate(arr,d,n);
}
}


void leftRotate(int arr[],int d,int n){
    int a,b,temp;
    
    if(d==0){
        cout<<"\nleftRotated Array: ";
        displayArray(arr,n);
    }
    else{

    for (int i = 0; i < n-1; i++)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    d--;
    leftRotate(arr,d,n);
    }
}


int main(){

    int arr1[]={1,2,3,4,5,6,7,8}; 
    int d,dtemp;
    cout<<"rotate your array by ? ";
    cin>>d;
    rightRotate(arr1,d,8);
    leftRotate(arr1,d,8);
}