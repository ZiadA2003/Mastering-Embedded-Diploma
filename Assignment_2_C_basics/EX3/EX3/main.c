/*
 * main.c
 *
 *  Created on: Jun 27, 2024
 *      Author: ziada
 */

#include "stdio.h"

int main (){
	float x,y,z;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);
	if(x>y){
		if(x>z){
			printf("Largest number = %2.2f", x);
		}
		else printf("Largest number = %2.2f", z);
	}
	else if (y > z){
			printf("Largest number = %2.2f", y);
	}
	else printf("Largest number = %2.2f", z);
	return 0;
}
