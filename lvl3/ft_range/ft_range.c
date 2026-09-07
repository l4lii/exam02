#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *result;
	int i;
	int len;

	if (start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;
	result = (int *)malloc(sizeof(int) * len);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (start <= end)
			result[i] = start + i;
		else
			result[i] = start - i;
		i++;
	}
	return (result);
}
