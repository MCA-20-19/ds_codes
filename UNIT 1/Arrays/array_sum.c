#include<stdio.h>
int main(){
    int arr[]={2,6,3,8,4};
    int size=sizeof arr/sizeof arr[0];
    int sum=0;
    printf("size of arr is %lu and size of arr[0] is %lu\n ",sizeof arr,sizeof arr[0]);
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    printf("sum of array is -->> %d\n",sum);
    return 0;
}