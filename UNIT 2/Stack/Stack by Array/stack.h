#include<stdio.h>
#define N 7
int stack[N];
int top=-1;



//creating push function
void push(int e){
    if(top==N-1){
        printf("stack overflow! , cant old any more try dynamic stack\n\n");
    }
else{
    top=top+1;
    stack[top]=e;
    printf("you pushed %d into satck\n",e);
    push_again();
}
}

//push again
void push_again(){
    int reply;
    printf("press 1 for pushing again and 0 for continuing   \n");
    scanf("%d",&reply);
    if(reply==1){
    int next_element;
    printf("enter the element you want to push   \n");
    scanf("%d",&next_element);
    push(next_element);
    }
    else{}
    
}

//creating pop function
void pop(){
    
    if(top==-1){
        printf("stack is empty. Nothing to pop out\n");
    }
    else{
        int element=stack[top];
      
        top--;
        printf("you just poped out   element %d from satck, isn't it  \n",element);
        printf("now your stack contains this only\n");
        display_stack();
        
    }
}
//what is top element;
void top_element(){
    if(top==-1)
    {
        printf(" oops! i cant display any thing stack is empty\n");
    }
    else{
        int element= stack[top];
        printf(" this is what you are looking for %d \n",element);
    }
}

//displayingn whole stack
void display_stack(){
printf("hello  this is you whole stack");
    for(int i=top;i>=0;i--){
        printf("  %d",stack[i]);
    }
    printf("\n");
}