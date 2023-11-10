#include <stdio.h>
#include "ft_printf.h"

int	main(int ac, char **av)
{
	int	return_ft_printf;
	int	return_printf;
	char *string = NULL;
	int nb = 0;
	unsigned int size_n = -1000000000;
	char str = 'c';
	/*if(ac == 2)
	{
		return_printf	= printf("bonjour le monde je suis %s est j'ai %d abonner et ma lettre est le %c %u l'adresse %p nombre en hexa : %x\n",av[1], nb, str, size_n, &size_n, 42);
		return_ft_printf = ft_printf("bonjour le monde je suis %s est j'ai %d abonner et ma lettre est le %c %u l'adresse %p nombre en hexa : %X\n",av[1], nb, str, size_n, &size_n, 42);
		printf("bonjour le monde je suis %s est j'ai %d abonner et ma lettre est le %c %u l'adresse %p\n",av[1], nb, str, size_n, &size_n);
		ft_printf("bonjour le monde je suis %s est j'ai %d abonner et ma lettre est le %c %u l'adresse %p\n",av[1], nb, str, size_n, &size_n);
		printf("retour de printf -> %d\nretour de ft_printf -> %d", return_printf, return_ft_printf);
	}*/
       	printf("%x\n", 0);
		ft_printf("%x\n", 0);
		printf(" %x \n", -1);
		ft_printf(" %x \n", );
		printf(" %x \n", 1);
		ft_printf(" %x \n", 1);
	return (0);
}
