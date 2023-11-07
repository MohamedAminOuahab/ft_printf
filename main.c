#include <stdio.h>
#include "libft/libft.h"

int	ft_printf(char *, ...);

int	main(int ac, char **av)
{
	int	return_ft_printf;
	int return_printf;

	int nb = 21;
	unsigned int size_n = -1000000000;
	char str = 'c';
	
	if(ac == 2)
	{
		return_printf	= printf("bonjour le monde je suis %s est j'ai %d abonner et ma lettre est le %c %u\n",av[1], nb, str, size_n);
		return_ft_printf = ft_printf("bonjour le monde je suis %s est j'ai %d abonner et ma lettre est le %c %u\n",av[1], nb, str, size_n);
		printf("retour de printf -> %d\nretour de ft_printf -> %d", return_printf, return_ft_printf);
	}
	return 0;
}
