/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 14:53:20 by pdavid-i          #+#    #+#             */
/*   Updated: 2017/12/16 17:18:38 by pdavid-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*pointer;

	pointer = b;
	i = 0;
	while (i < len)
	{
		*(pointer + i) = c;
		i++;
	}
	return (b);
}
