// Input electricity unit charge and calculate the total electricity bill according to the given
// condition: (A)
// ◦ For ƒirst 50 units Rs. 0.50/unit
// ◦ For next 100 units Rs. 0.75/unit
// ◦ For next 100 units Rs. 1.20/unit
// ◦ For unit above 250 Rs. 1.50/unit
// ◦ An additional surcharge of 20% is added to the bill.

#include<stdio.h>
void main(){
 int unit,additional_surcharges,Total_Bill;
  printf("Give electricity unit:-"); 
  scanf("%d",&unit);
   if(unit<=50){
    unit=unit*0.50;
   printf("electricity bill is:-%d",unit); 
}
 else if(unit<=150){
    unit=unit*0.50+(unit-50)*0.75;
   printf("electricity bill is:-%d",unit); 
}

 else if(unit<=250){
    unit=unit*0.50+unit*0.75+(unit-150)*1.20;
   printf("electricity bill is:-%d",unit); 
}
 else{
    unit=unit*0.50+unit*0.75+unit*1.20+(unit-250)*1.50;
   printf("electricity bill is:-%d",unit); 
}
additional_surcharges=unit*0.2;
Total_Bill=additional_surcharges+unit;
printf("\nfinal charges of  bill with additional surcharge is:-%d",Total_Bill);
}