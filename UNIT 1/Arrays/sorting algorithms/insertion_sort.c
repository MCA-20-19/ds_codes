#include <stdio.h>
 void print_arr(int *ptr,int size){
    for(int i=0;i<size;i++){
    printf("  %d",ptr[i]);
    }
    printf("\n");

}
insertion_sort(int *ptr,int size){
for(int i=1;i<size;i++){
        int temp=ptr[i];
        for(int j=i-1;j>=0;j--){
            if(temp<ptr[j])
            {
                
                ptr[j+1]=ptr[j];
                ptr[j]=temp;

            }


        }
    }

}
int main(){
    int arr[]={9,5,2,8,1,3,17,11,7};
    int size=sizeof arr/sizeof arr[0];
    print_arr(arr,size);
    insertion_sort(arr,size);
    print_arr(arr,size);
    return 0;
}