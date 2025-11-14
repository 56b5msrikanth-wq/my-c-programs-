#include <stdio.h>
int main (void)
{
    int arr[3],i,max,min;
    printf("Enter the values for arr[3]:");
    for(i=0;i<3;i++)
    scanf("%d",&arr[i]);
    max=min=arr[0];
    for(i=-0;i<3;i++ )
    {
         if(min>arr[i]) min=arr[i];
         if(max<arr[i]) max=arr[i]; 
    } 
    printf("Maximum in arr[3] is:%d",max);
    printf("minimum in arr[3] is:%d",min);
}