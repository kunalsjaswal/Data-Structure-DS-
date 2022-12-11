#include"C_L_functions.h"

int main(){
    Node* head=NULL;
    insert_At_Tail(head,1);
    insert_At_Tail(head,2);
    insert_At_Tail(head,3);

    insert_At_Head(head,10);
    insert_At_Head(head,20);
    insert_At_Head(head,30);
    print_Circular_List(head);

    Insert_At_Index(head,0,3);

    print_Circular_List(head);
    cout<<"size of list: "<<list_Length(head)<<endl;
}