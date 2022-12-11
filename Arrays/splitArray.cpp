#include <iostream>
using namespace std;

void splitArray(int arr[],int k,int len){
    // 1 2 3 4 5 6 
    // 3 4 5 6 1 2
    int temp;
    while(k>0){
        for (int i = 0; i < len-1; i++)
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    k--;
    }
}

void showArray(int arr[],int len){
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int  main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"k(elements to split): ";
    cin>>k;

    cout<<"original array: ";
    showArray(arr,len);
    splitArray(arr,k,len);
    cout<<"\narray after spliting and adding by "<<k<<": ";
    showArray(arr,len);
}