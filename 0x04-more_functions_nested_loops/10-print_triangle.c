#include "main.h"
/**
 * print_triangle - prints a triangle
 * Description: prints triangle on terminal plus new line
 * @size: size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int triangle_row, hash_count, space_count;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (triangle_row = 1; triangle_row <= size; triangle_row++)
		{
			for (space_count = size - triangle_row; space_count >= 1; space_count--)
			{
				_putchar(' ');
			}
			for (hash_count = 1; hash_count <= triangle_row; hash_count++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
