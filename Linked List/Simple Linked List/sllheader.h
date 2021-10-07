#include<stdio.h>
#include<stdlib.h>
//creatingn alias of simll  self refrential struct.
typedef struct simll{
int data;
struct simll *link;
}Node;
//creating a new node
Node *simll_create_node(int data){
Node *new_node=calloc(1, sizeof(Node));
new_node->link=NULL;
new_node->data=data;
return new_node;
}
//prepending a data element to an exixting list
Node* simll_prepend(Node *head,int data){
    Node *freshnode=simll_create_node(data);
    freshnode->link=head;
    return freshnode;
}
//inserting data element before a specific element
Node *simll_insert_before(Node *head,Node *mark,int data){
    if(head==mark)
    return simll_prepend(head,data);
    Node *parent=NULL;
    Node *trav=head;
    for(;trav!=NULL && trav !=mark;trav=trav->link)
    parent=trav;
    if(trav==mark){
        Node *freshnode=simll_create_node(data);
        freshnode->link=parent->link;
        
        parent->link=freshnode;
    }
    return head;
}
//finding a node from linked list
Node *simll_find(Node *head,int data){
    Node *trav=head;
    for(;trav!=NULL && trav->data!=data;trav=trav->link);
   printf("the element is present at %p address\n",trav);
    return trav;
  
}


//deleting element using alternate implementation
Node *simll_del_element(Node *head,Node *node_to_delete)
{
   
    Node *trav=head;
     Node *parent=trav;
    if(head==NULL)
    return head;

    if(head==node_to_delete){
    head=head->link;
    free(trav);
    trav=NULL;
    return head;
    }

  
    for(;trav!=node_to_delete;trav=trav->link)
    {
    parent=trav;}
    parent->link=trav->link;
    free(trav);
    return head;
}
//printing a linked list
void simll_print(Node *head){
    for(Node *trav =head;trav!=NULL;trav=trav->link)
    printf("  %d",trav->data);
    printf("\n");
}
// insert after any number in link list
Node * insert_after(Node *head,int check_data,int new_data){
    Node *trav=head;
    for(;trav->data!=check_data;trav=trav->link);
    if(trav->data==check_data && trav->link!=NULL){
    Node *freshnode=simll_create_node(new_data);
    freshnode->link=trav->link;
    trav->link=freshnode;
    }
    else
    {
     Node *freshnode=simll_create_node(new_data);
    trav->link=freshnode;
   }  
    



}