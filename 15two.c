//15)Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s
//choice(using if else)

#include<stdio.h>
void main(){
 int a,b,c,choice;
printf("Give First Number:-");
scanf("%d",&a);
printf("Give Second Number:-");
scanf("%d",&b);

printf("choose the following choice :-");
printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
printf("Enter your choice:-");
scanf("%d",&choice);


if(choice==1){
   c=a+b;
printf("Addition of two number is :- %d",c);
}
else if (choice==2) {
   c=a-b;
printf(" Subtraction of two number is :- %d",c);
}

else if(choice==3){
  c=a*b;
printf("Multiplication of two number is :- %d",c);
}
else if(choice==4){
   c=a/b;
printf("Division of two number is :- %d",c);
}
else{
    printf("not found");
}
} 