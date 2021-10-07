#include<stdio.h>
 int fib(int n){
     if(n==0)
     return 0;
     if(n==1)
     return 1;
     else{
         return fib(n-1)+fib(n-2);
     }

        
    }
int main(){
    int n , i ,result;
    printf("enter the  number of terms you want to print\n",n);
    scanf("%d",&n);
    for(i=0;i<=n;i++){
      result=fib(i);
      printf("  %d",result);
    }

   
    return 0;
}


