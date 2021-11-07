#include<stdio.h>
//creating sub arrays
int qdiv(int *ptr,int front, int rear){
    int pivot=ptr[front];
    int i=front;
    int j=rear;
    while(i<j){
    while(ptr[i]<=pivot){
        i++;
    }
    while(ptr[j]>pivot){
        j--;
    }
    if(i<j)
    {
        int hold=ptr[i];
        ptr[i]=ptr[j];
        ptr[j]=hold;
    }
    }
     int hold=ptr[front];
        ptr[front]=ptr[j];
        ptr[j]=hold;
        return j;
}

//quick sort
void quicksort(int *ptr,int front,int rear){
    if(front<rear)
    {
       int move=qdiv(ptr,front,rear);
       quicksort(ptr,front,move-1);
       quicksort(ptr,move+1,rear);
    }
}
//printing an array
void print_arr(int arr[],int len)
    {
     int i;
     for(i=0;i<len;i++)
	{
	 printf("%5d",arr[i]);
	}
     printf("\n");
    }