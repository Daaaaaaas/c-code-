// Print weekday based on given number.

#include <stdio.h>
void main(){
  int choice;
  printf("Give number to print day:-");
  scanf("%d",&choice);
 if(choice==1){
  printf("Monday");
}
 else if(choice==2){
  printf("Tuesday");
}
else if(choice==3){
  printf("Wednesday");
}
else if(choice==4){
  printf("Thursday");
}
 else if(choice==5){
  printf("Friday");
}
 else if(choice==6){
  printf("Saturday");
}
 else if(choice==7){
  printf("Sunday");
}
else{
    printf("Invalid");
}
}
