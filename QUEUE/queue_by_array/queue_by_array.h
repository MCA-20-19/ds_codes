#include<stdio.h>
 #define  N 10
 int arr[N];
 int front =-1;
  int rear = -1;
int size=sizeof arr/sizeof arr[0];
  int enqueue(int e){
      if(front==-1 && rear==-1){
        front++,rear++;
        arr[front]=arr[rear]=e;
      }
      else if(rear==size-1)
      {
          printf("queue will not hold any more\n\n");
      }
      else
      {
          rear++;
          arr[rear]=e;
      }
      
  }
  //display queue
  void display(){
      if(front==-1&&rear==-1){
    printf("there is nothing to print in queue");
    return;
      }
      for(int i=front;i<=rear;i++){
          printf("  %d",arr[i]);
      }
      printf("\n");
  }


//DEQUEUE
int dequeue(){
     if(front==-1&&rear==-1){
    printf("there is nothing to dequeue\n\n");
      }
      else if(front==rear){
          printf("we deleted only element of queue therefore front and rear are re-initalized to -1\n\n");
          front=rear=-1;

      }
      else{
          front++;
      }


}
//check queue peek
void peek(){
     if(front==-1&&rear==-1){
    printf("there is nothing to queue\n\n");
      }
      else{
          printf(" %d is the peek element of queue",arr[front]);
      }
}