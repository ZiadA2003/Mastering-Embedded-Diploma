/*
 * main.c
 *
 *  Created on: Jun 27, 2024
 *      Author: ziada
 */

#include "stdio.h"

int main(){
	float a, b;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f", &b);
	a = b/a;
	b = (1/a)*b;
	a = b*a;
	printf("After swapping, value of a = %g\nAfter swapping, value of b = %g", a,b);
	return 0;
}



