 //Find out largest number from given three numbers.

#include <stdio.h>

void main(){
 int a,b,c;
  printf("First Number:-");
  scanf("%d",&a);
  printf("Second Number:-");
 scanf("%d",&b);
  printf("Third Number:-");
 scanf("%d",&c);
    if(a>=b&&a>=c){
     printf("%d is largest number among, Given Three number",a);
}   
     else if (b>=a&&b>=c){
         printf("%d is largest number among, Given Three number",b);
} 
       else{
       printf("%d is largest number among, Given Three number",c);
}

}