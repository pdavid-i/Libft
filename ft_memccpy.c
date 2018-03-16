/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 21:09:46 by pdavid-i          #+#    #+#             */
/*   Updated: 2017/12/16 17:20:55 by pdavid-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*strsrc;
	unsigned char	*strdest;
	unsigned char	x;

	x = (unsigned char)c;
	strsrc = (unsigned char *)src;
	strdest = (unsigned char *)dest;
	while (n > 0 && *strsrc != x)
	{
		n--;
		*strdest++ = *strsrc++;
	}
	if (n > 0)
	{
		*strdest++ = *strsrc++;
		return ((void*)strdest);
	}
	else
		return (NULL);
}
