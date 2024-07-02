/*
 * main.c
 *
 *  Created on: Jun 26, 2024
 *      Author: ziada
 */
#include "stdio.h"
int main(){
	int x, y;
		printf("Enter two integers: ");
		fflush(stdout);
		scanf("%d", &x);
		scanf("%d", &y);
		printf("Sum: %d", x+y);
		return 0;
}
