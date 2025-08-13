/*
 * main.c
 *
 *  Created on: Jul 15, 2025
 *      Author: Shashank
 */
#include <stdio.h>
long long int g_data = 0xFFFFABCD11112345;

int main (){

	char *pAddress = (char *)&g_data;

	printf("value of pAddress %p is %x\n",pAddress,*pAddress);

	pAddress = pAddress + 1;
	printf("value of pAddress %p is %x\n",pAddress,*pAddress);

	for(;;);

}

