#include<stdio.h>
#define row 3
#define col 3
int main(){
    int arr[3][3];
    int i,j;
    printf("enter the elements of array\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("  %d",arr[i][j]);
        }
        printf("\n");
    }
return 0;
}