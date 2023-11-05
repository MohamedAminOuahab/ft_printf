#include <stdio.h>
#include "libft/libft.h"

int	ft_printf(char *, ...);

int	main(int ac, char **av)
{
	int	return_ft_printf;
	int	return_printf;
	
	if(ac == 2)
	{
		return_printf	= printf("bonjour le monde je suis %s est j'ai %d abonner et ma lettre est le %c %i\n",av[1], 2147483647, 'a', 15);
		return_ft_printf = ft_printf("bonjour le monde je suis %s est j'ai %d abonner et ma lettre est le %c %i\n",av[1], 2147483647, 'a', 15);
		printf("retour de printf -> %d\nretour de ft_printf -> %d\n", return_printf, return_ft_printf);
	}
	return 0;
}
