/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:41:53 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/12 08:05:43 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"


int 	ft_puthaxell(unsigned long  nbr)
{
	int	count;

	count = 0;
	if (nbr > 16)
		count += ft_puthaxell(nbr / 16);
	count += write(1, &"0123456789abcdef"[nbr % 16], 1);
	return (count);
}

int printAddress(const void *ptr) 
{
	unsigned long	adrss;

	adrss = (unsigned long )ptr;
	write(1, "0x",2);
	ft_puthaxell(adrss);
	return (16);
}


int	main(void)
{
	int nbr_max = 0;

	int return_printf = printf(" %p ", NULL);
	int return_hax =  ft_printf(" %p ", NULL);
	printf("\n%d\n%d", return_hax, return_printf);
	return (0);
}
