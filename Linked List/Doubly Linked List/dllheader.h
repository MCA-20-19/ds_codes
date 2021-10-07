#include<stdio.h>
#include<stdlib.h>
//creatingn alias of simll  self refrential struct.
typedef struct dll{
int data;
struct dll *blink;
struct dll *flink;
}Dnode;
//creating a new node
Dnode *dll_create_node(int data){
Dnode *new_dnode=calloc(1, sizeof(Dnode));
new_dnode->flink=NULL;
new_dnode->data=data;
new_dnode->blink=NULL;
return new_dnode;
}
//prepending to a doubly linked list
Dnode* dll_prepend(Dnode* head,int data){
    Dnode* freshdnode=dll_create_node(data);
    freshdnode->flink=head;
    if(head!=NULL)
    head->blink=freshdnode;
    return freshdnode;
}
//printing doubly linked list
Dnode* dll_print(Dnode* head){
    for(Dnode* trav=head;trav!=NULL;trav=trav->flink)
    printf("  %d",trav->data);
    printf("\n");
}
//finding an element in doubley linked list 
Dnode* dll_find(Dnode* head,int data){
Dnode* trav=head;
for(;trav!=NULL && trav->data!=data;trav=trav->flink);
printf("required element has been foud at location %p\n",trav);
    return trav;
}
//inserting before any node
Dnode* insert_before(Dnode *head,Dnode *mark,int data){
    if(head==mark)
    return dll_prepend(head,data);
     Dnode *parent=NULL;
    Dnode *trav=head;
    for(;trav!=NULL && trav !=mark;trav=trav->flink){
    parent=trav;
    }
    if(trav==mark){
        Dnode *freshnode=dll_create_node(data);
        freshnode->flink=parent->flink;
        parent->flink=freshnode;
}
return head;
}
//insert after any element in dll
Dnode *insert_after(Dnode *head,Dnode *mark,int data){
   
    
    Dnode* trav;
  
    for(;trav!=NULL && trav !=mark;trav=trav->flink);
    if(trav==mark && trav->flink!=NULL){
     Dnode *freshdnode=dll_create_node(data);
     freshdnode->flink=trav->flink;
     trav->flink->blink=freshdnode;
      freshdnode->blink=trav;
     trav->flink=freshdnode;
    return head;
    }
    else
    {
        Dnode *freshdnode=dll_create_node(data);
        trav->flink=freshdnode;
        freshdnode->blink=trav;
        return head;
    }
    }
//deleting node from doubly linked list.
Dnode *dll_delete_element(Dnode *head,Dnode *node_to_delete){
    if(head==NULL)
    return head;
    if(head==node_to_delete){
    Dnode *hold=head;
    head=head->flink;
    head->flink->blink=NULL;
    free(hold);
    return head;
    }
    else{
     Dnode *parent=head;
     Dnode *trav=head;
    
    for(;trav!=node_to_delete;trav=trav->flink)
    {
    parent=trav;}
    if(trav==node_to_delete && trav->flink!=NULL){
    parent->flink=trav->flink;
    trav->flink->blink=parent;
    free(trav);
    return head;}
    else{
        parent->flink=NULL;
        free(trav);
        return head;
    }
    }
}

