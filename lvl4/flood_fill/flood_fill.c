#include "flood_fill.h"

void	fill(char **area, t_point size, t_point vec, char to_fill)
{
	if (vec.y < 0 || vec.y >= size.y || vec.x < 0 || vec.x >= size.x || \
		area[vec.y][vec.x] != to_fill)
			return ;
	area[vec.y][vec.x] = 'F';
	fill(area, size, (t_point){vec.x - 1, vec.y}, to_fill);
	fill(area, size, (t_point){vec.x + 1, vec.y}, to_fill);
	fill(area, size, (t_point){vec.x, vec.y - 1}, to_fill);
	fill(area, size, (t_point){vec.x, vec.y + 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
