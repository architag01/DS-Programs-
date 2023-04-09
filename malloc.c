 /*Write a program to enter n numbers and print them using malloc() [Example of dynamic
array]*/
#include <stdio.h>
#include <stdlib.h>

int main(){
 int n,i;
printf("Enter n");
scanf("%d",&n);
int * arr = (int *)malloc(n*(sizeof(int)));
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++){
printf("%d ",arr[i]);
 }
return 0;
} 
