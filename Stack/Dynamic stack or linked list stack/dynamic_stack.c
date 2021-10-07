#include<stdio.h>
#include"dynamic_stack.h"
int main(){
    push(3);
     push(4);
      push(5);
       push(6);
       print_dsatck(top);
       pop();
       print_dsatck(top);
       check_top(top);



    return 0;
}