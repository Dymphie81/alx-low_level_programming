#include<stdio.h>
/**
 *main - Prints the size of many var types
 *
 *Return: Always 0 (Successful)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %id byte(s)\n", sizeof(a));
	printf("Size of an int: %id byte(s)\n", sizeof(b));
	printf("Size of a long int: %id byte(s)\n", sizeof(c));
	printf("Size of a long long int: %id byte(s)\n", sizeof(d));
       printf("Size of float: %id byte(s)\n", sizeof(e));	
       return (0);
}
