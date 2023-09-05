#include <stdlib.h>
#include "main.h"
/*betty*/ void free_grid(int **grid, int height) /*style*/
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
