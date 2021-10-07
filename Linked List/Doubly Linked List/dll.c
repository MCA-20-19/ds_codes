#include<stdio.h>
#include<conio.h>
#include"dllheader.h"
int main(){
    Dnode *elements=NULL;
    for(int i=10;i>0;i--){
    elements=dll_prepend(elements,i);
    }
    dll_print(elements);
    Dnode* req_element=dll_find(elements,10);
    elements=insert_before(elements,req_element,66);
    dll_print(elements);
  Dnode* req_element2=dll_find(elements,7);
   elements= insert_after(elements,req_element2,99);
    dll_print(elements);
  Dnode* req_element3=dll_find(elements,10);
  elements= dll_delete_element(elements,req_element3);
  dll_print(elements);
    return 0;
}