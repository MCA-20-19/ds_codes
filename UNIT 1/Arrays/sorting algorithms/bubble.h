#include<stdio.h>
 void print_arr(int arr[],int len)
    {
     int i;
     for(i=0;i<len;i++)
	{
	 printf("%5d",arr[i]);
	}
     printf("\n");
    }


void bubble_sort(int arr[],int len)
   {
   int i,j;
   for(i=0;i<len-1;i++)
      {
	for(j=i+1;j<=len-1;j++)
	   {
	     if(arr[i]>arr[j])
		{
		   int hold=arr[i];
		   arr[i]=arr[j];
		   arr[j]=hold;
		   }
	   }
       }


   }