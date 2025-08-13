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

	printf("Enter 2 numbers(give space between 2 nos):\n");
	scanf("%d %d",&num1,&num2);
	printf("Bitwise AND(&):%d\n",(num1&num2));
	printf("Bitwise OR(|):%d\n",(num1|num2));
	printf("Bitwise XOR(^):%d\n",(num1^num2));
	printf("Bitwise AND(~):%d %d\n",(~num1),(~num2));

	for(;;);
	return 0;

}
