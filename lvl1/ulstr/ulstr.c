#include <unistd.h>

char	ulstr(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= 32;
	else if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}

int	main(int argc, char **argv)
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
		argv[1][j] = ulstr(argv[1][j]);
		write(1, &argv[1][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
