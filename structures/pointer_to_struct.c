#include<stdio.h>
struct student{
    int roll_no;
    char name[10];
};
int main(){
    struct student std1={19,"zulufkar"};
    struct student *ptr=&std1;
    printf("student name is --->%s and the roll number is %d\n",ptr->name,ptr->roll_no);
    return 0;

}