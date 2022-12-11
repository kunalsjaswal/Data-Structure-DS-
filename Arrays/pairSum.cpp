#include <iostream>
using namespace std;

void findPair(int arr[],int size,int sum){
    int counter=0;
    for (int i = 0; i <size-1; i++)
    {
        for (int j = i+1; j < size-1; j++)
        {
            int temp=arr[i]+arr[j];
            if(sum==temp){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
                counter++;
            }
        }
        
    }
    if(counter==0){
        cout<<"no pair is equal to "<<sum<<endl;
    }
    
}


int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"pairs whose sum is 10 are:\n";
    findPair(arr,n,10);

}