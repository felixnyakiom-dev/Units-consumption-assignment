#include <stdio.h>
//Name:Felix munene
//REG NO: CT100/G/30648/26
float calculate_bill(float units);
int main()
{
	

	
	
	float bill,units;
	printf("Enter units consumed:");
	scanf("%f",&units);

	bill=calculate_bill(units);
	
	
	printf("\n");
	
	printf("paywater\n");
	printf("=========\n");
	printf("units consumed:%.2f\n",units);
	printf("bill :%.2f\n",bill);
	printf("==========\n");
	
	
	return 0;
}		
	

float calculate_bill(float units){
	float bill;
	if(units<=30){
		bill=units*20;
	}
	else if(units<=60){
		bill=(30*20)+(units-30)*25;
	}
	
	return bill;
}
