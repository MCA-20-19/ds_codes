
#include <stdio.h>
int binary_search(int *ptr,int size,int x){
    int left=0, right=size-1; 
    if(ptr[right]==x)
    return right;
    if(ptr[left]==x)
    return left;

   while(left<right) {
       int mid=(left+right)/2;
       if(ptr[mid]==x)
    return mid;
    else if(x<ptr[mid])
    right=mid-1;
    if(ptr[right]==x)
    return right;
    else
    left=mid+1;
    if(ptr[left]==x)
    return left;
   }
   return -1;


}

int main(){
int arr[] = {2,5,7,9,21,55,67,72,111,120};
int size = sizeof arr/ sizeof arr[0];
int return_value=binary_search(arr,size,21);
if(return_value==-1)
printf("element is not present in this array\n");
else
printf("element is present at index %d and position %d\n",return_value,return_value+1);

return 0;
}