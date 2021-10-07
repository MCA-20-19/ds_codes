#include <stdio.h>

 void linear_search(int *ptr, int size, int data){
    for(int i=0;i<=size;i++){
        if(ptr[i]==data)
        {
            printf("element is found at index %d and its position is %d\n",i,i+1);
            break;
        }
        
        if(i==size)
        {
            printf("element not found\n");
        }
    }
        

}
int main(){
int arr[] = {2,6,4,1,8,6,0};
int size = sizeof arr / sizeof arr[0];
linear_search(arr,size,2);
return 0;
}