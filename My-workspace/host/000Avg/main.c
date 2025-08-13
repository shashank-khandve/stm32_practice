/*
 * main.c
 *
 *  Created on: Jul 12, 2025
 *      Author: Shashank
 */

#include <stdio.h>


int main (){

	float num1,num2,num3;
	float average;

	printf("enter the first number: ");
	fflush(stdout);
	scanf ("%f",&num1);
	printf("\nenter the second number: ");
	fflush(stdout);
	scanf ("%f",&num2);
	printf("\nenter the third number: ");
	fflush(stdout);
	scanf ("%f",&num3);

	average=(num1+num2+num3)/3;

	printf("\naverage= %f",average);
	for(;;);
}
