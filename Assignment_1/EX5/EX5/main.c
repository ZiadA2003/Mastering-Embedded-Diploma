/*
 * main.c
 *
 *  Created on: Jun 27, 2024
 *      Author: ziada
 */

#include "stdio.h"

int main(){
	char x;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &x);
	printf("ASCII value of %c: %d", x,x);
	return 0;
}



