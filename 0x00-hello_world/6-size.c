#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always (success)
 */
int main(void)
{
	printf("size of an char:%ld bytes(s)\n", sizeof(char));
	printf("size of an int:%ld byte(s)\n", sizeof(int));
	printf("size of a long int:%ld byte(s)\n", sizeof(long int));
	printf("size of a long long int:%ld bytes(s)\n", sizeof(long long int));
	printf("size of a float:%ld byte(s)\n", sizeof(float));
	return (0);
}
