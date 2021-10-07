#include<stdio.h>
#include<stdlib.h>

  struct node{
    int data;
    struct node *link;
  };
  int main(){
  
  struct node *head=NULL;
  head=(struct node *)malloc(sizeof(struct node));
  head->data=20;
  head->link=NULL;
 
  struct node *move=malloc(sizeof(struct node));
  move->data=30;
  move->link=NULL;
  head->link=move;
 
  struct node *move2=malloc(sizeof(struct node));
  move2->data=40;
  move2->link=NULL;
  head->link->link=move2;
 while(head!=NULL){
     printf(" %d",head->data);
     head=head->link;
 }
  return 0;
}