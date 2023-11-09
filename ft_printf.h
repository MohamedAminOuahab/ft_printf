/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:20:12 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/09 19:09:53 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>

int 	ft_printf(const char *format, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_puthexa(char c, long int nbr);
int		ft_putnbr_base(long int nbr, char *base);
int		ft_putnbr_fd(int nb, int fd);
int		ft_putnbr_unsigned_fd(unsigned int nb, int fd);
int		ft_putstr_fd(char	*str, int fd);
size_t	ft_strlen(const char	*str);

#endif