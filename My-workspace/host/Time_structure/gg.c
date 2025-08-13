/*
 * gg.c
 *
 *  Created on: Jul 21, 2025
 *      Author: Shashank
 */
#include <stdio.h>
#include <stdint.h>

int square (volatile int *p){
    return (*p) * (*p) ;
}

void demo(void){
    unsigned int x = 10 ;
    int y = -40;
    if( (x+y) > 10) {
        printf("\nGreater than 10    %d",y);
    } else {
        printf("Less than or equals 10");
    }
}
int main(){
    int x=5;
    x=square(&x);
    printf("%d",x);

    demo();
}

