/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 21:20:21 by pdavid-i          #+#    #+#             */
/*   Updated: 2017/12/16 16:05:31 by pdavid-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src_2;
	char	*dest_2;
	size_t	l;

	l = -1;
	src_2 = (char *)src;
	dest_2 = (char *)dest;
	if (src_2 < dest_2)
		while ((int)(--n) >= 0)
			*(dest_2 + n) = *(src_2 + n);
	else
		while (++l < n)
			*(dest_2 + l) = *(src_2 + l);
	return (dest);
}
