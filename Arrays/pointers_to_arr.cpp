#include <iostream>
using namespace std;

void print_array(int *arr){
    for(int i=0;i<5;i++){
        cout<<i[arr]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr[5]={1,2,3,4,5};
    int *ptr=arr;  // (*ptr = arr  == *ptr = &arr[0]) pointer pointing to 1st element of array
    
    // ptr++;   // increasing pointer to 2nd element of array
    // cout<<*ptr;

    int *ptr2=&arr[2];
    print_array(ptr);

    *ptr2=0;
    *(ptr2+1)=1;
    *(ptr2-1)=-1;

    print_array(ptr);

}