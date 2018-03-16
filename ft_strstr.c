/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 17:44:14 by pdavid-i          #+#    #+#             */
/*   Updated: 2017/12/16 16:21:43 by pdavid-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *find)
{
	const char *i;
	const char *j;

	if (*str == '\0' && *find == '\0')
		return ((char *)str);
	while (*str)
	{
		i = str;
		j = find;
		while (*str && *j && *str == *j)
		{
			str++;
			j++;
		}
		if (!*j)
			return ((char*)i);
		str = i + 1;
	}
	return (0);
}
