#include<stdio.h>
#include"queue_by_array.h"
int main(){
    enqueue(1);
   enqueue(2);
    enqueue(3);
    enqueue(4);
    display();
    dequeue();
    display();
    peek();
    return 0;
}