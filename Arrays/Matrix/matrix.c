#include<stdio.h>
#define row 2
#define col 4
int main(){
    int arr[row][col];
    int i,j;
    printf("enter the elements of array\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("  %d",arr[i][j]);
        }
        printf("\n");
    }
return 0;
}