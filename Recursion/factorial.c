#include<stdio.h>
int fact_of_number(int n){
        if (n==1)
        return 1;
        else
        {
        int fact=n*fact_of_number(n-1);
        return fact;
        }
    }
int main(){
    int n;
    printf("enter the nuber you want to find factorial\n");
    scanf("%d",&n);
    int result=fact_of_number(n);
    printf("factorial of number is %d",result);
    return 0;
}