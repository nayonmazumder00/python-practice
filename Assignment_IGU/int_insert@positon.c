#include<stdio.h>
int main(){
   int std[40],quik,i,size,value;
   printf("enter no of elements in array of stds: ");
   scanf("%d",&size);
   printf("enter %d elements are:\n",size);
   for(i=0;i<size;i++)
      scanf("%d",&std[i]);
   printf("enter the position where you want to insert the element: ");
   scanf("%d",&quik);
   printf("enter the value into that position: ");
   scanf("%d",&value);
   for(i=size-1;i>=quik-1;i--)
      std[i+1]=std[i];
   std[quik-1]= value;
   printf("Final Array after inserting the value is : \n");
   for(i=0;i<=size;i++)
      printf("%d\n",std[i]);
   return 0;
}