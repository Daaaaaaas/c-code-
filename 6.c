#include <stdio.h>

void main(){
  float principal,roi,interest,timeperiod;
  printf("give value of principal:-");
  scanf("%f",&principal);
 printf("give value of roi:-");
 scanf("%f",&roi);
 printf("give value of time period :-");
 scanf("%f",&timeperiod);

  interest=(principal*roi*timeperiod)/100.0;
 printf("total interest is:-");
 printf("%f",interest);
}