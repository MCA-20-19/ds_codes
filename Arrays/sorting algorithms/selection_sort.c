#include<stdio.h>
#include"print_array.h"
#include"find_min.h"
void selection_sort(int *ptr,int size){
    
    for(int i=0;i<size-1;i++){
     int hold=i;
    for(int j=i+1;j<size;j++){
        
        if(ptr[j]<ptr[hold])
        hold=j;
         
    
   
    int temp=ptr[hold];
    ptr[hold]=ptr[i];
    ptr[i]=temp;
    
    }
    }

}
    

int main(){
    int arr[]={3,1,6,4,9,5,7,2};
    int size=sizeof arr/sizeof arr[0];
    print_array(arr,size);
    selection_sort(arr,size);
     print_array(arr,size);
    return 0;
}