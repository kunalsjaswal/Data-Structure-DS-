// Input : arr = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1}
// Output : [-1, 1, 2, 3, 4, -1, 6, -1, -1, 9]

#include <iostream>
using namespace std;

void arrangeArray(int arr[],int len){

    int temp;
    int counter=0;
    for (int i = 0; i < len-1; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if(i==arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                counter++;
            }
        }
        if (counter==0)
        {
            for (int k = i+1; i < len; i++)
            {
                if(arr[k]==-1){
                    temp=arr[i];
                    arr[i]=arr[k];
                    arr[k]=temp;
                }
            }
        }
        counter=0;
    }
}

void showArray(int arr[],int len){
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    
    int arr[]={-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
    int len=sizeof(arr)/sizeof(arr[0]);
    
    cout<<"initial array: ";
    showArray(arr,len);
    arrangeArray(arr,len);
    cout<<"\narray after arranging: ";
    showArray(arr,len);

}