/*
 * main.c
 *
 *  Created on: Jul 15, 2025
 *      Author: Shashank
 */

#include <stdio.h>
#include <stdint.h>

uint8_t age;
float num1, num2;

int main (void){

	printf("Enter you two numbers");

	age= scanf("%f %f",&num1, &num2);
	printf("number of scanned items:%d \n",age);


	if (num1==num2){
		printf("Numbers are equal\n");
	}else{
		if(num1<num2)
			printf("%f is greater number\n",num2);
		else
			printf("%f is greater number\n",num1);
	}


	for (;;);
}
