/*
 * main.c
 *
 *  Created on: Jul 14, 2025
 *      Author: Shashank
 */
#include <stdio.h>

int main(){
	double charge, chargeE, electrons;

	printf ("Enter the charge\n");
	scanf ("%lf",&charge);

	printf("Enter the charge of electron\n");
	scanf("%le",&chargeE);

	electrons =(charge /chargeE)* -1;

	printf("total number of electrons = %le\n",electrons);
	printf("total number of electrons = %lf\n",electrons);

	for(;;);
	return 0;
}

