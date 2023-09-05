/*Write a C program to find prime factors of a number given by user using for/while/do while loop.
Example
Input
Input any number: 10
Output
Prime factors of 10: 2, 5
*/

#include<stdio.h>
int main(){
int a,i,b;
printf("Input any number: ");
scanf("%d",&a);
for(i=2;i>=a;i++)
{if(a%i==0){
    printf("%d",i);
}}

return 0;
}