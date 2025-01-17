/*
 * main.c
 *
 *  Created on: Jul 6, 2024
 *      Author: ziada
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isPrime(int num){
	for(int i = 2; i <= num/2; i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}

void primeInterval(int low, int high){
	printf("Prime numbers between %d and %d are: ", low, high);
	for(int i = low; i<=high; i++){
		if(isPrime(i)){
			printf("%d ",i);
		}
	}
}

int factorial(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	else{
		return (n * factorial(--n));
	}
}

void reverse(char * str){
	int length = strlen(str);
	if(length == 1){
		printf("%c", str[0]);
		return;
	}

	reverse(&str[1]);
	printf("%c",str[0]);

}

int pwr(int num, int index){
	if(index == 0){
		return 1;
	}
	else{
		return num * pwr(num, --index);
	}

}
int main(){
    /*___________EX1___________*/
//	int low, high;
//	printf("Enter two numbers(intervals): ");
//	fflush(stdout);
//	scanf("%d%d", &low, &high);
//	primeInterval(low, high);

	/*___________EX2___________*/
//	int n;
//	printf("Enter an positive integer: ");
//	fflush(stdout);
//	scanf("%d", &n);
//	printf("Factorial of %d = %d", n , factorial(n));

	/*___________EX3___________*/
//	char str[100];
//	printf("Enter a sentence: ");
//	fflush(stdout); fflush(stdin);
//	gets(str);
//	fflush(stdout); fflush(stdin);
//	reverse(str);


	/*___________EX4___________*/
	int num, index;
	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d", &num);
	printf("Enter power number(positive integer) : ");
	fflush(stdout);
	scanf("%d", &index);
	printf("%d^%d = %d", num, index, pwr(num, index));
	return 0;
}

