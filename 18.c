 //Read marks of ƒive subjects. Calculate percentage and print class accordingly. Fail below
//35, Pass Class between 36 to 45, Second Class between 46 to 60, First Class between 61 to
//70, Distinction if more than 70

#include<stdio.h>
void main(){
 float Biology,Physics,Maths,Chemistry,English,percentage;
 
  printf("Enter Marks of each subject:-\n");
    printf("Enter Marks of Biology :-");
  scanf("%f",&Biology);
  printf("Enter Marks of Physics:-");
scanf("%f",&Physics);
  printf("Enter Marks of Maths :-");
scanf("%f",&Maths);
  printf("Enter Marks of Chemistry :-");
 scanf("%f",&Chemistry);
  printf("Enter Marks of English :-");
 scanf("%f",&English);
percentage=((Biology+Physics+Maths+Chemistry+English)*100)/500;
printf("Your percentage is :-%.2f",percentage);
if(percentage<=35){
 printf("fail");
}
else if( percentage>=36 && percentage<=45){
 printf("\nPass Class");
}
else if(percentage>=46 && percentage<=60){
 printf("\nSecond class");
}
else if( percentage>=61 && percentage<=70){
 printf("\nFirst class");
}
else{
printf("\nDistinction");
}
}