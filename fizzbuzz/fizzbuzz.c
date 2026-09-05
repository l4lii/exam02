#include <unistd.h>

void	print_nbr(int nbr)
{
	char c;
	
	if (nbr >= 10)
		print_nbr(nbr / 10);
	c = (nbr % 10) + 48;
	write(1, &c, 1);
}

void	fizzbuzz()
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			print_nbr(i);
		write(1, "\n", 1);
		i++;
	}
}

int	main()
{
	fizzbuzz();
	return(0);
}
