/*
 * main.c
 *
 *  Created on: Jul 2, 2024
 *      Author: ziada
 */

#include "stdio.h"

int main(){
	char text[100], character;
	int counter = 0;
	printf("Enter a string: ");
	fflush(stdout);
	gets(text);
	fflush(stdin);
	printf("Enter a character to find frequency: ");
	fflush(stdout);
	scanf("%c", &character);
	fflush(stdin);
	int i = 0;
	while(text[i] != '\0'){
		if(text[i] == character){
			counter++;
		}

	    i++;
	}

	printf("Frequency of %c = %d", character, counter);
	return 0;
}
