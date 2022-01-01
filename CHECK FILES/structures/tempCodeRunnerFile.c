#include<stdio.h>

struct emp{
  char name[10];
  int id;
  char add[10];
};


int main(){
  struct emp emp1={"malik",21,"brinal"};
  struct emp emp2={"adam",23,"kulgam"};
  printf("employee 1 name -->%s\n",emp1.name);
  printf("employee 1 id -->%d\n",emp1.id);
  printf("employee 1 address -->%s\n\n\n",emp1.add);
  printf("employee 2 name -->%s\n",emp2.name);
  printf("employee 2 id -->%d\n",emp2.id);
  printf("employee 2 address-->%s\n",emp2.add);
 
    return 0;
}