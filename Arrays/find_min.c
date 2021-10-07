#include<stdio.h>
#include"find_min.h"
#include"print_array.h"
int main(){
    int arr[]={4,6,1,8,3,9};
    int size=sizeof arr/sizeof arr[0];
    print_array(arr,size);
    find_min(arr,size);
    return 0;
}