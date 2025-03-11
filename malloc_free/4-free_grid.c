#include <stdlib.h>
/**
 * free_grid - Frees a grid allocated by alloc_grid.
 * @grid: The grid to free.
 * @height: The height of the grid.
 *
 * Return: void
*/

void free_grid(int **grid, int height)
{
if (!grid)
return;
if (!grid[0])
return;
while (height-- > 0)
free(grid[height]);
free(grid);
}
