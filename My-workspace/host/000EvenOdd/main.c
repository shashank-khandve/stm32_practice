/*
 * main.c
 *
 *  Created on: Jul 15, 2025
 *      Author: Shashank
 */

#include <stdio.h>
#include <stdint.h>


int main (void){
	int32_t num1,num2;
	num2=0x00000001;

	printf("Enter a number");
	scanf("%d",&num1);
	if(num1 & num2)
		printf("Entered number is ODD\n");
	else
		printf("Entered number is EVEN\n");

	for(;;);
	return 0;
}
