/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche </var/mail/cwastche>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 22:05:18 by cwastche          #+#    #+#             */
/*   Updated: 2021/07/30 22:07:39 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i])
		{
			f(i, s);
			i++;
		}
	}
}
