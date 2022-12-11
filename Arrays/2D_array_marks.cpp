#include<iostream>
using namespace std;

// find max and min marks in respective subjects (3) 
int main(){
    int n;
    cout<<"Number of student's data: ";
    cin>>n;

    double marks[n][3],max1=0,max2=0,max3=0;
    cout<<"enter students marks"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Student "<<i+1<<endl;
        for(int j=0;j<3;j++){
            cout<<"subject "<<j+1<<": ";
            cin>>marks[i][j];
           
           if(j==0){
              if(max1<marks[i][j]){
                max1=marks[i][j];
              }
           }
           if(j==1){
              if(max2<marks[i][j]){
                max2=marks[i][j];
              }
           }
           if(j==2){
              if(max3<marks[i][j]){
                max3=marks[i][j];
              }
           }
        }
    }
    cout<<endl<<"subjects   sub1   sub2   sub3"<<endl;
    for(int i=0;i<n;i++){
        cout<<"student "<<i+1<<"    ";
        for(int j=0;j<3;j++){
            
            cout<<marks[i][j]<<"    ";
        }
        cout<<endl;
    }

    cout<<"subject 1 highest marks: "<<max1<<endl;
    cout<<"subject 2 highest marks: "<<max2<<endl;
    cout<<"subject 3 highest marks: "<<max3<<endl;

    
    return 0;
}