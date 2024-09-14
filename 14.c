//14) Check whether given character is vowel or consonant. (Using single if only)

#include <stdio.h>

 void main(){
  char alphabet;
 printf("Give Alphabet:-");
scanf("%c",&alphabet);

if(alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u'){
  printf("alphabet is vowel.");
}
else{
printf("alphabet is consonant.");
}

}
