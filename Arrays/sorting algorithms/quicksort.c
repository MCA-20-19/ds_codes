#include<stdio.h>
#include"quicksort.h"


int main(){
      int arr[]={2,5,6,9,1,3,6,7,8,4,7};
      int len=sizeof(arr)/sizeof(arr[0]);
      print_arr(arr,len);
      quicksort(arr,0,len-1);
      print_arr(arr,len);
    
    return 0;
}