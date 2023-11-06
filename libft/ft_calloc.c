/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:31:25 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/22 18:31:25 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*ptr;

	if (num_elements == 18446744073709551615UL
		&& element_size == 18446744073709551615UL)
		return (NULL);
	if ((int)(num_elements) < 0 && (int)(element_size) < 0)
		return (NULL);
	if ((int)(num_elements * element_size) < 0)
		return (0);
	ptr = malloc(num_elements * element_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, num_elements * element_size);
	return (ptr);
}
