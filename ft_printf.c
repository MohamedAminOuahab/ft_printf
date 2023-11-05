/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:47:48 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/31 15:47:48 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"

/**
* @param *format 	: 	pointeur de formatage
* @param ... 		: 	une ellipse indiquant que des arguments 
* 				supplémentaires peuvent être transmis
*
* @return		:	taill de la chaine de formatage
* @detail 		:	recode un printf
*
* [LIB STDARG]
*
* va_list		:	c'est surcture qui va permetre de connaitre 
* 				le type de d'une variable non defini
*
* va_start		:	va pemettre de intialiser la variable va_list
* va_end		:	va libere la variable va_list
*
* va_arg		:	permet d'extraire et de typee le paramettre suivant (Attention au cas)
* 				va_args(<variable de type va_list>, <type du parametre>);
*
* 
*
* [NOTE DE SUR PRINTF]
*
* si on trouve un caractre '%' on partique un 
* formatage sur le caratecre suivant
*
*
**/

static int	ft_formatage(char c, va_list	args)
{
	int	taill;

	taill = 0;
	if (c == 'c')
		taill += ft_putchar_fd(va_arg(args, int), 1);
	else if (c == 's')
		taill += ft_putstr_fd(va_arg(args, char *), 1);
	else if (c == 'd' || c == 'i')
		taill += ft_putnbr_fd(va_arg(args, int), 1);
	/*else if (c == 'u')
		taill += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'p' || c == 'X')
		taill += ft_puthexa(c, va_arg(agrs, int));*/
	else if (c == '%')
		taill += ft_putchar_fd('%', 1);
	return (taill);
}

int	ft_printf(const char *format, ...)
{
	va_list			args;
	unsigned int	count;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_formatage(*format, args);
		}
		else
			count += ft_putchar_fd(*format, 1);
		format++;
	}
	va_end(args);
	return (count);
}
