// Print weekday based on given number.

#include <stdio.h>
void main(){
  int choice;
  printf("Give number to print day:-");
  scanf("%d",&choice);
 if(choice==1){
  printf("january");
}
 else if(choice==2){
  printf("february");
}
else if(choice==3){
  printf("march");
}
else if(choice==4){
  printf("april");
}
 else if(choice==5){
  printf("may");
}
 else if(choice==6){
  printf("june");
}
 else if(choice==7){
  printf("july");
}
else if(choice==8){
  printf("august");
}
else if(choice==9){
  printf("september");
}
else if(choice==10){
  printf("octomber");
}
else if(choice==11){
  printf("november");
}
else if(choice==12){
  printf("december");
}
else{
    printf("Invalid");
}
}