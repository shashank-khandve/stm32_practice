/*
 * main.c
 *
 *  Created on: Jul 10, 2025
 *      Author: Shashank Khandve
 */
#include <stdio.h>
#include "math.h"


int main(){
	printf ("Add = %x\n", math_add(0x0fff1111, 0x0fff1111));
	printf ("sub = %x\n", math_sub(0x0fff1111, 0x0fff1111));
	printf ("Mul = %I64x\n", math_mul(0x0fff1111, 0x0fff1111));
	printf ("Div = %f\n", math_div(100, 8));
}

