/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:43:34 by cwastche          #+#    #+#             */
/*   Updated: 2021/07/17 16:42:38 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*cpy;
	int		i;

	len = ft_strlen(s1);
	cpy = malloc((len + 1));
	i = 0;
	if (cpy)
	{
		while (s1[i])
		{
			cpy[i] = s1[i];
			i++;
		}
		cpy[i] = 0;
	}
	return (cpy);
}
