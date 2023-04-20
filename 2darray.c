//  Write a menu driven program to input a 2-D array, output it, add all its elements, add
// only the diagonal elements, count the number of odd elements and find the largest among
// the elements stored.
#include <stdio.h> 
#include <stdlib.h> 
int main()
{ 
  int row,col,i,j,sum=0,dsum=0;
  printf("enter the row and column");
  scanf("%d",&row); scanf("%d",&col);
  int **arr = (int **)calloc(row,sizeof(int *));
   for(i=0;i<row;i++){ arr[i]=
    (int*)calloc(col,sizeof(int));
  }
 printf("Enter Elems : \n");
 for ( i = 0; i < row; i++){
  for ( j = 0; j < col; j++){
    scanf("%d",&arr[i][j]);
    }
 }
 int max= arr[0][0];
printf("Elems : \n"); 
  for (i= 0; i < row; i++){ 
    for (j = 0; j < col; j++){
     printf("%d ",arr[i][j]);
     sum+=arr[i][j];
  if (i==j )
 {
 dsum+=arr[i][j];
 }
 if(max<arr[i][j]){
max=arr[i][j];
 }
}
 printf("\n");
 }
 printf("sum = %d \ndsum = %d\nmax = %d",sum,dsum,max);
 return 0
} 
