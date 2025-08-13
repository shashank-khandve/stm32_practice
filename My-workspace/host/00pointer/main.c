/*
 * main.c
 *
 *  Created on: Jul 14, 2025
 *      Author: Shashank
 */
#include <stdio.h>

int main(){

	unsigned char Var= 100;

	printf("the address of Var = %p\n",&Var);

	unsigned char* ptr=&Var;

	printf("Var=%c\n",*ptr);

	*ptr = 65;

	printf("Var=%c\n",*ptr);

	for(;;);


}

