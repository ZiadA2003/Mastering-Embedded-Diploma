/*
 * main.c
 *
 *  Created on: Jul 2, 2024
 *      Author: ziada
 */

#include "stdio.h"

int main(){
	float a[2][2], b[2][2];
	printf("Enter the elements of 1st matrix\n");

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Enter a%d%d: ", i+1 , j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &a[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix\n");

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &b[i][j]);
		}
	}

	printf("Sum Of Matrix\n");

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("%1.1f\t", a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
