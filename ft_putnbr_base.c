/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:31:12 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/10 18:46:32 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_sign(char *str)
{
	while (*str)
	{
		if (*str == '-' || *str == '+')
			return (0);
		str++;
	}
	return (1);
}

static int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i])
	{
		j = 0;
		while (str[j])
		{
			if (i == j)
			{
				j++;
				continue ;
			}
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_putnbr_base(long int nbr, char *base)
{
	int			base_len;
	long int	long_nbr;
	int			count;

	count = 0;
	long_nbr = nbr;
	base_len = ft_strlen(base);
	if (base_len <= 1
		|| (ft_check_sign(base) == 0)
		|| (ft_check_base(base) == 0))
		return (0);
	if (long_nbr < 0)
	{
		long_nbr = -long_nbr;
		count += ft_putchar_fd('-', 1);
	}
	if (long_nbr > base_len - 1)
		count += ft_putnbr_base(long_nbr / base_len, base);
	count += write(1, &base[long_nbr % base_len], 1);
	return (count);
}
/*
int main(int argc, char *argv[])
{
    ft_putnbr_base(42, "01");
    return 0;
}*/
