// Name: NAYON MAZUMDER
//  REG : 210011015059".
//  Dept. Of CSE, IGU, INDIA
#include <stdio.h>
long mulTwoNumbers(long *, long *);
 
int main()
{
   long fno, sno,mul;
   
   printf("\n\n Pointer : Multiply two numbers using call by reference:\n"); 
   printf("-------------------------------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%ld", &fno);
   printf(" Input the second  number : ");
   scanf("%ld", &sno);   
   mul = mulTwoNumbers(&fno, &sno);
   printf(" The multi of %ld and %ld  is %ld\n\n", fno, sno, mul);
   return 0;
}
long mulTwoNumbers(long *n1, long *n2) 
{
   
   return (*n1 )*(*n2);
}