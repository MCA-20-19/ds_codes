//adding first n numbers
#include<stdio.h>
int add_recursive(int n){
        if(n==0)
        return 0;
        else {
        int sum=n+add_recursive(n-1);
        return sum;
        }
    }
int main(){
    int n;
    printf("enter the number upto which you want the sum\n");
    scanf("%d",&n);
    int total=add_recursive(n);
    printf("sum of all the numbers upto <%d> is --->[%d]",n,total);
    return 0;
}