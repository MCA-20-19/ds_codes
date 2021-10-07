#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 10
int stack_arr[MAX];
int top=-1;
//creating push operation
int push(int data){
   do{
    top=top+1;
    stack_arr[top]=data;}while(top<MAX-1);
    return top;
}
//pop operation;
void pop(int top){
    do{
    printf(" %d",stack_arr[top]);
    top--;}while(top>-1);
  
}
//empty check
bool is_empty(top){
    return top==-1;;
}
