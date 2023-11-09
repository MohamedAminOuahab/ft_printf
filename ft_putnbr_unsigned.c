/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:32:34 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/09 19:05:39 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned_fd(unsigned int nb, int fd)
{
	int				len;
	unsigned int	max_value;

	len = 0;
	max_value = (unsigned int)(0);
	if (nb < max_value)
		nb = 4294967295 - nb;
	else if (nb < 10)
		len += ft_putchar_fd(nb + 48, fd);
	else if (nb > 9)
	{
		len += ft_putnbr_unsigned_fd((nb / 10), fd);
		len += ft_putnbr_unsigned_fd((nb % 10), fd);
	}
	return (len);
}
