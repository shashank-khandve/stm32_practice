/*
 * main.c
 *
 *  Created on: Jul 20, 2025
 *      Author: Shashank
 */

#include <stdio.h>
#include <stdint.h>
#include "main.h"

int main(void){
	fun1();
	Time_t t1,t2,t3;
	uint32_t temp=0;
	printf("Enter the first time in HH:MM:SS format: ");
	scanf("%d:%d:%d",&t1.Hour,&t1.Minute,&t1.Second);

	printf("Enter the second time in HH:MM:SS format: ");
	scanf("%d:%d:%d",&t2.Hour,&t2.Minute,&t2.Second);

	temp=time_calculate(t1.Second,t2.Second,&t3.Second,60,temp);
	temp=time_calculate(t1.Minute,t2.Minute,&t3.Minute,60,temp);
	temp=time_calculate(t1.Hour,t2.Hour,&t3.Hour,24,temp);
	printf("Addition of time is : %d:%d:%d\n",t3.Hour,t3.Minute,t3.Second);
	for(;;);
}

