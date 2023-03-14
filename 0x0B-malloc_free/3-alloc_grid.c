#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: input elements
 * @height: input elements
 * Return: pointer to 2 dim. array
 *
 */

int **alloc_grid(int width, int height)
{
	int **amp;

	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	amp = malloc(sizeof(int *) * height);

	if (amp == NULL)
		return (NULL);

	for (x = 0; x < height; x++)

	{
		amp[x] = malloc(sizeof(int) * width);

		if (amp[x] == NULL)
		{
			for (; x >= 0; x++)
			       free(amp[x]);

		free(amp);

	return (NULL);
		}
	}
for (x = 0; x < height; x++)

{
	for (y = 0; y < width; y++)
		amp[x][y] = 0;
}
return (amp);
}


