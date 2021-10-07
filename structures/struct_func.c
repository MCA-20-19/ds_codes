#include<stdio.h>
#include<stdlib.h>
typedef struct employee{
    int id ;
    int salary
} emp;

emp* create_struct(int x,int y){
emp *new=malloc(sizeof(emp));
new->id=x;
new->salary=y;
return new;
}
int main(){
    emp *emp1= create_struct(21,50000);
    printf("the id of employee is ->> %d and the pay is %d",emp1->id,emp1->salary);

    return 0;
}