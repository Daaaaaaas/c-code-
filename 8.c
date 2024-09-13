//8) Convert number of days into year, week & days.

#include<stdio.h>
void main(){
 int Year,Week,Days,n;
 printf("give Days convert into year,week & days format :-");
 scanf("%d",&n);
  
  Year=n/365;
  Week=(n%365)/7;
 Days=(n%365)%7;

 printf("Given Days into  year,week & days format--> "); 
 printf("%d",Year);
 printf(" Year ");
 printf("%d",Week); 
 printf(" Week  ");
 printf("%d",Days);
 printf(" Days");
}
