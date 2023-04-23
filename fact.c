// Write a program to find the factorial of any number using tail recursion.
#include <stdio.h> 
#include<stdlib.h>
int factorial(int n){
if (n<1)
return 1;
 return n*factorial(n-1);
} 
int main(){
 int n;
 printf("Enter N : ",&n);
scanf("%d",&n);
 printf("factorial : %d \n",factorial(n));
return 0;
} 
