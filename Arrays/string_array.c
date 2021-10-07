#include<stdio.h>
#include<string.h>
int main(){
    char strg[14];
    
    printf("enter your string\n");
    gets(strg);
    printf("your entered string is--> %s\n",strg);
    int size =sizeof strg[14]/sizeof strg[0];
    printf("size of string is %d \n",size);
    int length =strlen(strg);
    printf("length of your string is-->..%d\n",length);
    return 0;
}