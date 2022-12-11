#include <iostream>
using namespace std;

int main(){

    // ways of initializing arrays

    int arr1[10];
    int n=5;
    int arr2[n];
    int arr3[5]={1,2,3,4,5};
    arr1[0]=0;

    // ways to retreive element of arrays 
    // 1. cout<< arr[2];
    // 2. cout<< 2[arr];

    cout<<"address of elements of array are: \n";
    for (int i = 0; i < 5; i++)
    {
        cout<<"\n"<<i<<". "<<&arr3[i];
    }


    return 0;
}