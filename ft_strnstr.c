/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 23:08:09 by pdavid-i          #+#    #+#             */
/*   Updated: 2017/12/19 14:23:00 by pdavid-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *str, const char *find, size_t n)
{
	const char *i;
	const char *j;

	while (*str && n)
	{
		i = str;
		j = find;
		while (*str && *j && *str == *j && n)
		{
			str++;
			j++;
			n--;
		}
		if (!*j)
			return ((char*)i);
		str = i + 1;
		n--;
	}
	return (0);
}
