#include <stdio.h>
#include <stdlib.h>
typedef struct circular_node{
int data;
struct circular_node *link;
}cnode;
//create node function
cnode* cll_create_node(int data) {
cnode* freshnode = calloc(1, sizeof(cnode));
freshnode->link = freshnode;
freshnode->data = data;
return freshnode;
}


// inserting a new node
cnode* cll_insert(cnode* head, int data) {
cnode* newNode = cll_create_node(data);
if (head == NULL)
 return newNode;
cnode* trav = head;
for (;trav->link!= head;trav=trav->link);
trav->link = newNode;
newNode->link=head;
return head;
}

//inserting immediately after head node
cnode* cll_insert_after_head(cnode* head, int data){
cnode* newNode = cll_create_node(data);
if (head == NULL) return newNode;
newNode->link = head->link;
head->link = newNode;
return newNode;
}
//finding a node
cnode* cll_find(cnode* head, int data) {
if (head == NULL)
 printf("nothing in list\n\n");
cnode *trav = head;
for(;trav->data!=data;trav=trav->link);
    printf("element found at location %p \n\n",trav);
return trav;
}
//creating delete any node function
 cnode *delete_node(cnode *head,cnode *ntd){
    if(head==ntd){
        cnode *hold=head;
        cnode *head2=head;
        head2=head->link;
        free(hold);
        cnode*trav=head2;
        for(;trav->link!=head;trav=trav->link);
        trav->link=head2;
        return head2;
    }
    cnode *parent=head;
    cnode *trav=head;
    for(;trav!=ntd;trav=trav->link){
        parent=trav;
    }
    if(trav==ntd&&trav->link==head){
        parent->link=head;
        free(trav);
        return head;
    }
    else
    {
        parent->link=trav->link;
        free(trav);
        return head;
}
 }


//printing list
void cll_print(cnode* head) {
if (head == NULL) 
return;
cnode* trav=head;
do {
printf("%d ",trav->data);
trav=trav->link;
}while (trav!=head);
printf("\n");
}