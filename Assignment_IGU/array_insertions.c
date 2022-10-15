#include <stdio.h>

int main()
{
    int i,arra[50], f_position,s_position, c, n, value;
    
    printf("Enter number of elements in the array\n");
    scanf("%d", &n);
    
    printf("Enter %d elements\n", n);
    for (c = 0; c < n; c++)    
        scanf("%d", &arra[c]);
    printf("The array is: \n");
    for (c = 0; c < n; c++)    
        printf("%d\n", arra[c]);    
     printf("Enter the init location where you wish to delete element\n");
    scanf("%d", &f_position);
    printf("Enter the end Location: ");
    scanf("%d", &s_position);
    for(i=f_position;i<s_position;i++){
    
    if ( f_position >= n+1 )    
    printf("Deletion not possible.\n");
    
    else
    {    
        for ( c = f_position - 1 ; c < n - 1 ; c++ ) 
        arra[c] = arra[c+1];        
        n=c;
        printf("Resultant array is\n");
        
        for( c = 0 ; c < n - 1 ; c++ )        
        printf("%d\n", arra[c]);        
    } 
    }   
    return 0;
}