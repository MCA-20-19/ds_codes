#include<stdio.h>
#include"..\..\Linked_List\Simple_Linked_List\sllheader.h"
Node *front=NULL;
Node *rear=NULL;
// enqueue operation
Node*enqueue(int x){
    Node *freshnode=simll_create_node(x);
if(front==NULL && rear==NULL){
    front=freshnode;
    rear=freshnode;
    return rear;
}
else{
    rear->link=freshnode;
    rear=freshnode;
    return rear;

}
}

//dequeue operation;
Node *dequeue(Node *front){
    if(front==NULL && rear==NULL){
        printf("queue is empty\n\n");
        return front;
    }
    else if (rear!=NULL&&front==rear){
    
        rear=NULL;
        front=rear;
        printf("now queue is empty\n\n");
        return front;
    }
 else{
     Node *hold=front;
     front=hold->link;
     free(hold);
     return front;
 }
 
}

//display queue
void display(Node *front){
    if(front==NULL){
        printf("queue is empty hence nothing to print\n\n");
    }
    else{
        Node *trav=front;
        while(trav!=NULL){
            printf("  %d",trav->data);
    
            trav=trav->link;
        }
        printf("\n\n");
    }
}