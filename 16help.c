// Check whether the entered character is upper case, lower case, digit or any special
//character.

#include<stdio.h>
void main(){
 char c;
 printf("entered upper case, lower case, digit or any special character:- ");
 scanf("%c",&c);
 if(c>='A'&&c<='Z')
  //or if(c>=65 &&c<=90)   [here we can use character or its 'ASCII' value]
  printf("Capital Letter\n");
  else if(c>=97 &&c<=122){
      //here we use 'ASCII' value 
      //[we can also use ] else if(c>='a' &&c<='z'){}
        printf("small Letter\n");
  }
  else if(c>=48 &&c<=57){
      //here we use 'ASCII' value .
      //[we can also use ] else if(c>='0' &&c<='9' ){}
        printf("Digit\n");
  }
  else{
              printf("special character\n");

  }

}