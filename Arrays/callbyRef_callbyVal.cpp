#include <iostream>
using namespace std;
void callBy_Ref(int *arr){
    // manipulating array 
    arr[5]=100;
}

void callBy_val(int arr[10]){   // this takes pointer to the array
    // manipulating array 
    *(arr+2)=500;   // == arr[3]=500
}

void print_array(int *arr){
    for(int i=0;i<10;i++){
    // arr[i] == i[arr]

        cout<<i[arr]<<" ";
    }
}

int main(){
    cout<<"here we will demonstrate call by refence and call by value for an array(same will happen for variable and rest data structures)"<<endl;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};


    cout<<"call by value result: ";
    callBy_val(arr);
    print_array(arr);
    cout<<endl<<"call by reference result: ";
    callBy_Ref(arr);
    print_array(arr);

    return 0;
}