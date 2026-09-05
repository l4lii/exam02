#include <unistd.h>

int	arg_len(char *argv)
{
	int len;
	len = 0;
	while(argv[len])
		len++;
	return(len);
}

int	main(int argc, char *argv[])
{
	int j;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	j = arg_len(argv[1]) - 1;
	while (j >= 0)
	{
		write(1, &argv[1][j], 1);
		j--;
	}
	write(1, "\n", 1);
	return (0);
}
