#include <unistd.h>

char	replace_c(char c)
{
	if (((c >= 'n') && (c <= 'z')) || ((c >= 'N') && (c <= 'Z')))
		c -= 13;
	else if (((c >= 'a') && (c <= 'm')) || ((c >= 'A') && (c <= 'M')))
		c += 13;
	return (c);
}

int	main(int argc, char *argv[])
{
	int j;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	j = 0;
	while(argv[1][j])
	{
		argv[1][j] = replace_c(argv[1][j]);
		write(1, &argv[1][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
