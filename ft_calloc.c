/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:48:43 by cwastche          #+#    #+#             */
/*   Updated: 2021/08/01 14:26:36 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*ptr;
	unsigned int	i;

	ptr = malloc(size * count);
	i = 0;
	if (ptr)
	{
		while (i < (size * count))
		{
			ptr[i] = '\0';
			i++;
		}
	}
	return (ptr);
}
