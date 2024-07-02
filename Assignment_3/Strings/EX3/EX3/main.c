/*
 * main.c
 *
 *  Created on: Jul 2, 2024
 *      Author: ziada
 */

#include "stdio.h"
#include "string.h"

int main(){
	char text[50], Rev[50];
	printf("Enter the string  : ");
	fflush(stdout);
	gets(text);
	fflush(stdin);
	int len = strlen(text), i = 0;

	for(i = 0; i < len; i++){
		Rev[i] = text[len-1-i];
	}
	Rev[i] = '\0';

	printf("Reverse string is : %s", Rev);
	return 0;

}
