/*
 * main.c
 *
 *  Created on: Jul 2, 2024
 *      Author: ziada
 */

#include "stdio.h"

int main(){

	int arr [100];
	int n, loc, element;
	printf("Enter no of elements: ");
	fflush(stdout);
	scanf("%d", &n);

	for(int i = 0; i< n; i++){
		arr[i] = i+1;
		printf("%d ", arr[i]);
	}

	printf("\nEnter the element to be inserted : ");
	fflush(stdout);
	scanf("%d", &element);
	printf("Enter the location : ");
	fflush(stdout);
	scanf("%d", &loc);

	for(int i = n+1; i >= loc; i--){
		arr[i] = arr[i-1];
	}

	arr[loc-1] = element;
	n++;

	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}


	return 0;
}
