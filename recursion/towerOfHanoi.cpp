#include<iostream>
using namespace std;

void towerOfHanoi(int n, string src, string helper, string dest){

    if(n==0){
        return;
    }
        // 1st (n-1) disks  from src to helper using dest as helper 
        towerOfHanoi(n-1,src,dest,helper);
        
        // now moving 1 disk from src to dest 
        cout<<"moving disk "<<n<<" from "<<src<<" to "<<dest<<endl;

        // now move (n-1) disks from helper to destination 
        towerOfHanoi(n-1,helper,src,dest);
}


int main(){
    int n=3;   // total disks
    cout<<"Tower of hanoi\n"<<endl<<" |    |    |"<<endl;
    cout<<" |    |    |"<<endl;
    cout<<" |    |    |"<<endl;
    cout<<"[S]  [H]  [D]"<<endl<<endl<<"Steps:"<<endl;

    towerOfHanoi(n,"S","H","D");

}