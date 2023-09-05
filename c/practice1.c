#include<stdio.h>
int main(){
int day,month,year,d1,c;
int months,years;

printf("Enter Date: ");
scanf("%d",&day);
printf("Enter month: ");
scanf("%d",&month);
printf("Enter year: ");
scanf("%d",&year);
years=year-2001;
months=month-1;
if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
    d1==31;
}
else if(month==4||month==6||month==9||month==11){
    d1==30;
}
else if(month==2){
    if((year%4==0 && year%100!=0)||(year%4==0 && year%100==0 && year%400==0))
        d1=29;
    else   
        d1=28;
 }
 
    return 0;
}