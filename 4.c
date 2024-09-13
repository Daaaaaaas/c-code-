//4) Print average of three numbers. (with scanf)

#include <stdio.h>

void main(){
  float a,b,c,average;
  printf("give first number:-");
 scanf("%f",&a);
  printf("give second number:-");
 scanf("%f",&b);
 printf("give third number:-");
 scanf("%f",&c);

average=(a+b+c)/3.0;
printf("average of three numbers is:-");
printf("%.2f",average);

}
