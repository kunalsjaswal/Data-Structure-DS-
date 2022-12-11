#include "D_L_operations.h"

int main(){

    Node* head=NULL;

    insert_To_Tail(head,1);
    insert_To_Tail(head,2);
    insert_To_Tail(head,3);

    insert_To_Head(head,0);
    insert_To_Head(head,-1);
    insert_To_Head(head,-2);

    print_List(head);

    insert_At_Index(head,10,5);
    print_List(head);
    cout<<"size: "<<list_size(head)<<endl;

    return 0;
}
