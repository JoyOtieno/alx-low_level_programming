#include <stdio.h>
#include "main.h"
/**
*main - Function that multipies 2 numbers
*@argc: number of arguments
*@argv: pointer array to argc
*Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int n, m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	m = atoi(argv[2]);
	printf("%d\n", n * m);
	return (0);
}
