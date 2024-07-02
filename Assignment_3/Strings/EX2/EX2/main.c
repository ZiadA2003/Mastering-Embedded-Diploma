/*
 * main.c
 *
 *  Created on: Jul 2, 2024
 *      Author: ziada
 */

#include "stdio.h"
#include "string.h"

int main(){
	char text[100];
	printf("Enter a string: ");
	fflush(stdout);
	gets(text);
	fflush(stdin);
	printf("Length of string: %d", strlen(text));

	return 0;
}
