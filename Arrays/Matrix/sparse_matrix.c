#include<stdio.h>
#define row 3
#define col 3

int main(){
    int arr[row][col];
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
    int count =0;
    
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==0)
            count=count+1;
        }
     }
    printf("total number of zeros in this matrix is %d\n",count);
    if(count>(row*col)/2)
    printf("since number of zeros is more than half of total elements\ntherefore this is a sparse matrix\n");
    else
     printf("since number of zeros is less or equal to half of total elements\ntherefore this is !not a sparse matrix\n");

return 0;
}