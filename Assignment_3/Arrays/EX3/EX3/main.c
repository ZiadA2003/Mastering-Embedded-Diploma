/*
 * main.c
 *
 *  Created on: Jul 2, 2024
 *      Author: ziada
 */

#include "stdio.h"

int main(){
	int r,c;
	int matrix[20][20];

	printf("Enter rows and column of matrix: ");
    fflush(stdout);
	scanf("%d%d",&r, &c);
	printf("\nEnter elements of matrix:\n");

	for(int i = 0; i<r; i++){
	       for(int j = 0; j < c; j++){
	           printf("Enter element a%d%d: ", i+1, j+1);
	           fflush(stdout);
	           scanf("%d", &matrix[i][j]);
	       }
	   }
	printf("\nEntered matrix:\n");

	for(int i = 0; i<r; i++){
		       for(int j = 0; j < c; j++){
		           printf("%d   ", matrix[i][j]);
		       }
		       printf("\r\n");
		   }
	printf("\nTranspose of matrix:\n");

   for(int i = 0; i<c; i++){
	   for(int j = 0; j < r; j++){
		   printf("%d   ", matrix[j][i]);
	   }
	   printf("\r\n");
   }

	return 0;
}