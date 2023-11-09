/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 03:06:56 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/09 19:05:48 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char	*str, int fd)
{
	int len;

	len = ft_strlen(str);
	while (*str)
		ft_putchar_fd(*str++, fd);
	return (len);
}
