#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"enter pascal triangle terms: ";
    try{
        cin>>n;
    }catch(exception e){
        cout<<e.what();
        return 0;
    }


    int arr[n][n]={0};
    if(n==1){
        cout<<"1";
        return 0;
    }
    arr[0][0]=1;
    arr[1][0]=1;
    arr[1][1]=1;


    for(int i=2;i<n;i++){
        arr[i][0]=1;

        for(int j=1;j<=i;j++){
            // not including 1st element 
            arr[i][j]=arr[i-1][j]+arr[i-1][j-1];  
        }
    }

    for(int i=0;i<n;i++){
        cout<<"(i="<<i+1<<")  ";
        for(int j=0;j<=i;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
      1             i=1
    1   1            =1
  1   2   1          =2
1   3   3   1        =3

1 0 0 0 0 0 0 
1 1 0 0 0 0 0
1 2 1 0 0 0 0
1 3 3 1 0 0 0
1 4 6 4 1 0 0
1 5 10 18 
*/