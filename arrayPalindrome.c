// Write a program to store n elements in an array, and then check how many elements are
//palindrome numbers in that array.
#include <stdio.h>
#include <stdlib.h>
int palindrome(int n){
int rev=0,i,temp=n;
while(temp!=0){
rev=(rev*10)+temp%10;
 temp/=10;
 }
 if(rev==n){
 return 1;
 }
 else{
return 0;
 }
} 
int main()
{
   int n,i,count=0;
   printf("Enter n: ");
   scanf("%d",&n);
   int *arr = (int *)calloc(n,sizeof(int));
   printf("Enter Elements : \n"); 
     for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
     }

   for(i=0;i<n;i++){
     count+=palindrome(arr[i]);
   }
   printf("%d",count);
   return 0; 
} 
