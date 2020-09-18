#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	char ptr;

	(void) argv;
	if (argc != 2)
	{
		ft_putstr("ERROR : Wrong number of arguments\n");
		return (1);
	}
	while ()
	
	return (0);
}
