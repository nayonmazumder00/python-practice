#include<stdio.h>
int main(){5
    int s,j,i,a,array[s];
    printf("Please Enter an size of array: ");
    scanf("%d",&s);
    for(j=0; j<s; j++){
        printf("Please Enter the %d elements of array: ",j);
        scanf("%d",&array[j]);
    }
    printf("Please enter a array Number: ");
    scanf("%d", &a);
    for(i=0;i<s; i++){
        if(array[i]==a){
         printf("The index of array is: %d ", i);   
        }

        else{
           printf("Iteam not found");  }
         }
        return 0;
    }
   
    