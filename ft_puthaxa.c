/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthaxa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:06:22 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/10 19:25:30 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(char c, long int nbr)
{
	int	count;

	count = 0;
	if (c == 'x' || c == 'p')
	{
		if (c == 'p')
			count += write(1, "0x", 2);
		count += ft_putnbr_base(nbr, "0123456789abcdef");
	}
	else
		count += ft_putnbr_base(nbr, "0123456789ABCDEF");

	return (count);
}
