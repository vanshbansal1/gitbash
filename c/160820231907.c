#include<stdio.h>


int main() {
    float a1,a2,b1,b2,c,d1,d2,e,f;
    printf("Please enter the coordinates of the first point.\n");
    scanf("%f,%f",&a1,&a2);
    printf("Please enter the coordinates of the second point.\n");
    scanf("%f,%f",&b1,&b2);
    printf("Please enter the coordinates of the third point.\n");
    scanf("%f,%f",&d1,&d2);
    c=((a1-b1)*(a1-b1))+((a2-b2)*(a2-b2));
    e=((a1-d1)*(a1-d1))+((a2-d2)*(a2-d2));
    f=((b1-d1)*(b1-d1))+((b2-d2)*(b2-d2));
    c= sqrt(c);
    e= sqrt(e);
    f= sqrt(f);
    printf("Distance between first and second points is:%f\n",c);
    printf("Distance between first and third points is:%f\n",e);
    printf("Distance between third and second points is:%f\n",f);
return 0;
}
