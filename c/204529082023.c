#include<math.h><stdio.h>
int main () {
/*Write a program to print the square roots of all the numbers within a range.*/
int n;
double i,sqrts;
    printf("enter a no. : ");
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sqrts=sqrt(i);
    printf("square root of %.15lf is : %lf \n",i,sqrts);
}
return 0;
}