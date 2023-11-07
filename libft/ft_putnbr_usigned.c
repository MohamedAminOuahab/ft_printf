/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_usigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:32:34 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/07 19:53:44 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_unsigned_fd(unsigned int nb, int fd)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb = 4294967295 - nb;
	}
	else if (nb >= 0 && nb <= 9)
		len += ft_putchar_fd(nb + 48, fd);
	else if (nb > 9)
	{
		len += ft_putnbr_unsigned_fd((nb / 10), fd);
		len += ft_putnbr_unsigned_fd((nb % 10), fd);
	}
	return (len);
}