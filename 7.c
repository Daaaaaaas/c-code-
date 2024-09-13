//7)Convert seconds into hours, minutes & seconds and print in HH:MM:SS.
#include<stdio.h>
void main(){
 int Hours,Minutes,Seconds,n;
 printf("give seconds to convert in HH:MM:SS format:-");
 scanf("%d",&n);
  
  Hours=n/3600;
  Minutes=(n%3600)/60;
 Seconds=(n%3600)%60;

 printf("Given seconds into HH:MM:SS format--> "); 
 printf("%d",Hours);
 printf(":");
 printf("%d",Minutes); 
 printf(":");
 printf("%d",Seconds);
}
