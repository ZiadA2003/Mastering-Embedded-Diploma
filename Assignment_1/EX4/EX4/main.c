/*
 * main.c
 *
 *  Created on: Jun 26, 2024
 *      Author: ziada
 */

#include "stdio.h"

int main(){
	float x, y;
		printf("Enter two numbers: ");
		fflush(stdout);
		scanf("%f", &x);
		scanf("%f", &y);
		printf("Sum: %f", x*y);
		return 0;
}


