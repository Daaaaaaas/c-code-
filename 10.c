//print Given feet into inches.

#include<stdio.h>
void main (){
  int a,b;
  printf("Give first number:-");
  scanf("%d",&a);
 printf("Give second number:-");
 scanf("%d",&b); 

  a=a+b;
  b=a-b;
  a=a-b;

printf(" after Swaping two numbers--> first number is ");
printf("%d",a);
printf(" & second number is ");
printf("%d",b);

}