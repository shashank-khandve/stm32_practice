/*
 * main_new.c
 *
 *  Created on: Jul 12, 2025
 *      Author: Shashank
 */


#include <stdio.h>


int main (){

	double num1,num2,num3;
	double average;

	printf("enter 3 number");
	fflush(stdout);
	scanf("%lf%lf%lf",&num1,&num2,&num3);
	average=(num1+num2+num3)/3;

	printf("\naverage= %lf",average);
	for(;;);
}
