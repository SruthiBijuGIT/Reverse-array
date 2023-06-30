#include <stdio.h>    
int main()    
{    
int a[5],n,i; 
printf(" Enter the size of the array: \n"); 
scanf("%d",&n);
printf("Enter the array elements:\n");   
for (i=0;i<n;i++) 
{     
scanf("%d ",&a[i]);     
}      
printf("\n");    
printf("Array in reverse order: \n");    
for (int i=n-1;i>=0;i--) 
{     
printf("%d ",a[i]);     
}     
return 0;    
}    
