//Input an integer number and check the last digit of number is //even or odd. 

#include <stdio.h>
void main(){
  int n,r;
printf("Input an integer number:-");
scanf("%d",&n);
r=n%10;

if(r%2==0){
printf(" last digit of number is even and number is ----> %d",r);
}
else{
printf(" last digit of number is odd and  number  is ----> %d",r);

}
}