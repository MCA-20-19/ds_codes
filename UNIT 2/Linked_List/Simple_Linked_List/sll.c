#include<stdio.h>
#include<stdlib.h>
#include"sllheader.h"
int main()
{
    
    Node *elements=NULL;
    for(int i=10;i>0;i--){
        elements=simll_prepend(elements,i);
                         }

     simll_print(elements);
     Node *req_element=simll_find(elements,7);//req_element refers to "required element" to delete of find.
     simll_insert_before(elements,req_element,55);
     simll_print(elements);
    Node *etd=simll_find(elements,8);//etd refers to "element to delete"
    elements= simll_del_element(elements,etd);
    simll_print(elements);
    insert_after(elements,10,2);
    simll_print(elements);
    Node *req_element2=simll_find(elements,2);
    elements= simll_insert_before(elements,req_element2,0);
    simll_print(elements);
        return 0;
 }