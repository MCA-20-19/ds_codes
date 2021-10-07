#include<stdio.h>
int main()
  {
	
	int i,j,hold;
	int unsorted[]={3,1,5,4,9,7};
	int len=sizeof(unsorted)/sizeof(unsorted[0]);
	printf("size of array unsorted is %d\n",len);
	printf("array before sort\n");
	for(i=0;i<len;i++)
	   {
	    printf("%5d",unsorted[i]);
	   }
	   printf("\n");
	for(i=0;i<len-1;i++)
	   {
	     for(j=i+1;j<=len-1;j++)
		{
		  if(unsorted[i]>unsorted[j])
		    {
		      hold=unsorted[i];
		      unsorted[i]=unsorted[j];
		      unsorted[j]=hold;
		    }
		}
	   }
	printf("array after sort is \n");
	for(i=0;i<len;i++)
	   {
	     printf("%5d",unsorted[i]);
	   }



return 0;
  }
