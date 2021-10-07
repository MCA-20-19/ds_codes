#include<stdio.h>
void find_min(int *ptr,int size){
int hold=ptr[0];
    for(int i=1;i<size;i++){
        
        if(ptr[i]<hold)
        hold=ptr[i];
    }
    printf(" smallest element is %d",hold);
}
