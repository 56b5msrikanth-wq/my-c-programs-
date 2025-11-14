#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf ("enter the number of rows and cloumns of the matries :");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],c[m][n];
    printf("enter the elements of matrix a:\n");
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
          scanf("%d",&a[i][j]); } }
    printf("enter the elements of matrix b:\n");
    for (i=0;i<m;i++){
    for (j=0;j<n;j++){
      scanf("%d",&b[i][j]);} }
      // add the matrices 
      for (i=0;i<m;i++){
      for (j=0;j<n;j++) {
      c[i][j]=a[i][j]+b[i][j];}}
      // print the result 
      printf(" the sum of the two matrices is :\n"); for(i=0;i<m;i++){
      for (j=0;j<n;j++){
        printf("%d",c[i][j]);}
        printf("\n");}
    

    
    

return 0;
}
