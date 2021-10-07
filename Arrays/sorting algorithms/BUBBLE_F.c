#include<stdio.h>
#include "bubble.h"



 int main()
     {
   
     int unsorted[]={3,2,7,4,8,1};
     int len=sizeof (unsorted)/sizeof(unsorted[0]);
	printf("array before sort\n");
	print_arr(unsorted,len);
	bubble_sort(unsorted,len);
	printf("array after sort\n");
	print_arr(unsorted,len);
    return 0;
     }