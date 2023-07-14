#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int i, x, y;
	int  **ptgrid;

    if (width <= 0 || height <= 0)
        return NULL;

    ptgrid = malloc(sizeof(int *) * height);

    if (ptgrid == NULL)
        return NULL;

    for (x = 0; x < height; x++)
    {
        ptgrid[x] = malloc(sizeof(int) * width);

        if (ptgrid[x] == NULL)
        {
            for (i = 0; i < x; i++)
                free(ptgrid[i]);

            free(ptgrid);
            return NULL;
        }

        for (y = 0; y < width; y++)
            ptgrid[x][y] = 0;
    }

    return ptgrid;
}
