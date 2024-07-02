/*
 * main.c
 *
 *  Created on: Jul 2, 2024
 *      Author: ziada
 */

/*
 * main.c
 *
 *  Created on: Jul 2, 2024
 *      Author: ziada
 */

#include "stdio.h"

int main(){
	int n;
	float sum = 0;
	printf("Enter the numbers of data: ");
	fflush(stdout);
	scanf("%d", &n);
	float array[100];

	for(int i = 0; i < n; i++ ){
		printf("%d. Enter number:", i+1);
		fflush(stdout);
		scanf("%f", &array[i]);
		sum += array[i];
	}

	printf("Average = %2.2f", sum/n);
	return 0;
}

