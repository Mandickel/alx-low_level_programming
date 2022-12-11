#include <stdio.h>
/**
 * main - starting point
 *
 * Return: (0) succcess
 *
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long longType;
	long long longlongType;
	//size of types
	printf("Size of a char: %zu bytes\n",sizeof(charType));
	printf("Size of an int: %zu bytes\n",sizeof(intType));
	printf("Size of a long int: %zu bytes\n",sizeof(longType));
	printf("Size of a long long int: %zu bytes\n", sizeof(longlongType));
	printf("Size of a float: %zu bytes\n",sizeof(floatType));
	return (0);
		
}
