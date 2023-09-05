#include <stdlib.h>
#include "main.h"
/*betty*/ void print_grid(int **grid, int width, int height) /*style*/
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
