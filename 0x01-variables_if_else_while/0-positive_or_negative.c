/*
 * File: 0-positive_or_negative.c
 * Auth: Brennan D Baraban
 */

 #include<stdlib.h>
 #include<time.h>
 #include<stdio.h>

/**
 * main - Prints a number and states whether it is positive, negative, or zero.
 *
 * Return: Always successi
 */
int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
	printf("%d is positive\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
else
	printf("%d is negative\n", n);

return (0);
}
