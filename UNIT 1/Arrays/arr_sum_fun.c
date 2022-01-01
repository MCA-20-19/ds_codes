#include<stdio.h>
int add_elements(int *ptr,int size){
    int total=0;
    for(int i=0;i<size;i++){
        total=total+ptr[i];
    }
    return total;
}
int main(){
    int arr[]={3,6,8,1,9,4};
    int size=sizeof arr/ sizeof arr[0];
    int sum=add_elements(arr,size);
    printf("sum of all the elements of array is %d",sum);
    return 0;
}
