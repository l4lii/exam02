#include <unistd.h>

int	num_reps(char c)
{
	int reps;

	if ((c >= 'a') && (c <= 'z'))
		reps = (c - 96);
	else if ((c >= 'A') && (c <= 'Z'))
		reps = (c - 64);
	else
		reps = 1;
	return (reps);
}

int	main(int argc, char *argv[])
{
	int j;
	int reps;
	int start;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	while (argv[1][j])
	{
		reps = num_reps(argv[1][j]);
		start = 0;
		while (start < reps)
		{
			write(1, &argv[1][j], 1);
			start += 1;
		}
		j++;
	}
	write(1, "\n", 1);
}
