/*
 * main.c
 *
 *  Created on: Jul 15, 2025
 *      Author: Shashank
 */


#include <stdio.h>
#include <stdint.h>
int main (void){

	int8_t choice;
	float a,b,h,area;

	printf("This program is related to area of different shapes\n");

	printf("Kindly enter the shapes you want to calculate the area\n");
	printf("triangle---->t\n");
	printf("Trapezoid---->z\n");
	printf("circle---->c\n");
	printf("Square---->s\n");
	printf("rectangle---->r\n");

	scanf("%c",&choice);

	switch(choice){
	printf("Shashank\n");
	case 't':
			printf("You enter Triangle for area\n");
			printf("Enter base(b): ");
			scanf("%f",&b);
			printf("Enter the height(h): ");
			scanf("%f",&h);
			area = (b*h)/2;
			if(b<0 || h<0){
				printf("base or height value can't be -ve\n");
				for(;;);
				return 0;
			}
			printf("area = %f\n",area);
			break;

	case 'z':
			printf("You enter Trapezoid for area\n");
			printf("Enter base(a): ");
			scanf("%f",&a);
			printf("Enter base(b): ");
			scanf("%f",&b);
			printf("Enter the height(h): ");
			scanf("%f",&h);
			area = ((a+b)/2)*h;
			if(a<0 || b<0 || h<0){
				printf("base or height value can't be -ve\n");
				for(;;);
				return 0;
			}
			printf("area = %f\n",area);
			break;
	case 'c':
			printf("You enter Circle for area\n");
			printf("Enter radius(r): ");
			scanf("%f",&b);
			area = 3.14*b*b;
			if(b<0){
				printf("radius value can't be -ve\n");
				for(;;);
				return 0;
			}
			printf("area = %f\n",area);
			break;
	case 's':
			printf("You enter Square for area\n");
			printf("Enter side(a): ");
			scanf("%f",&a);
			area = a*a;
			if(a<0){
				printf("side value can't be -ve\n");
				for(;;);
				return 0;
			}
			printf("area = %f\n",area);
			break;
	default:
		printf("You entered wrong choice\n");


	}
	for(;;);

}
