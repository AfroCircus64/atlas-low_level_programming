#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: parameter
 * @height: parameter
 * Return: Always 0
 */

int **alloc_grid(int width, int height)
{
	int i, k, a, b;
	int **t;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	t = malloc(sizeof(int *) * height);

	if (t == NULL)
	{
		free(t);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		t[i] = malloc(sizeof(int) * width);

		if (t[i] == NULL)
		{
			for (k = i; k >= 0; k--)
			{
				free(t[k]);
			}

			free(t);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			t[a][b] = 0;
		}
	}

	return (t);
}
