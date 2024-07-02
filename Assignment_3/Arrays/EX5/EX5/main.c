/*
 * main.c
 *
 *  Created on: Jul 2, 2024
 *      Author: ziada
 */

#include "stdio.h"
#include "stdbool.h"

int main(){

	int arr [100];
	int n, element;
	bool found = false;
	printf("Enter no of elements : ");
	fflush(stdout);
	scanf("%d", &n);

	for(int i = 0; i< n; i++){
		arr[i] = (i+1)*11;
		printf("%d ", arr[i]);
	}

	printf("\nEnter the element to be searched : ");
	fflush(stdout);
	scanf("%d", &element);


	for(int i = 0; i < n; i++){
		if(arr[i] == element){
			found = true;
			printf("Number found at the location = %d", i+1);
			break;
		}
	}

	if(!found){
		printf("Number not found!");
	}

	return 0;
}

