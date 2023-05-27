#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: 2-dimentional grid
 * @height: height of dimensional grid
 * Description: free memory of grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
