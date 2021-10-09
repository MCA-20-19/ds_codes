#include<stdio.h>
#include"queue_by_ll.h"
int main (){
    rear=enqueue(1);
     rear=enqueue(2);
     rear= enqueue(3);
       rear=enqueue(4);
       rear=enqueue(5);
        display(front);
       front= dequeue(front);
       display(front);

    return 0;
}