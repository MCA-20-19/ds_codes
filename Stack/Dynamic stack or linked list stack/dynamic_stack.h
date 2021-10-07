#include<stdio.h>
#include<stdlib.h>

typedef struct dynamic_stack{
    int data;
    struct dynamic_stack *link;
}dstack;
dstack *top=NULL;
//reating push operation for dynamic stack

void push(int data){
 dstack *newnode= (dstack*)malloc(sizeof(dstack));
 newnode->data=data;
 newnode->link=top;
 top=newnode;
}
//creating push operation for dynamic stack;
void pop(){
    if(top==NULL){
    printf(" this stack is empty\n\n");
    }
    else{
        printf("we just poped %d element\n\n",top->data);
        dstack *temp=top;
        top=top->link;
        free(temp);
    }
}
//creating display function for dynamic stack
void print_dsatck(dstack *top){
    dstack *temp =top;
    if(top==NULL){
        printf("this stack is empty\n\n");
    }
        else{
            
            while(temp!=NULL){
                printf("  %d\n",temp->data);
                temp=temp->link;
            }

        }
    
}
//check top of stack
void check_top(dstack *top){
    if(top==NULL){
        printf(" this stack is empty");
    }
    else{
        printf("top element of stack is  %d\n\n",top->data);
            }
}