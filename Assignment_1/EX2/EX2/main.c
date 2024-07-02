/*
 * main.c
 *
 *  Created on: Jun 26, 2024
 *      Author: ziada
 */
#include "stdio.h"

int main(){
	int x;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &x);
	printf("You entered: %d", x);
	return 0;
}


