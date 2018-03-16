/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 19:04:20 by pdavid-i          #+#    #+#             */
/*   Updated: 2017/12/17 19:32:48 by pdavid-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	const unsigned char *p1 = (const unsigned char *)s1;
	const unsigned char *p2 = (const unsigned char *)s2;

	if (*p1 == '\0' && *p2 != '\0')
		return (-1);
	if (*p2 == '\0' && *p1 != '\0')
		return (1);
	if (*p1 == '\0' && p2 == '\0')
		return (0);
	while (*p1 != '\0' && *p2 != '\0')
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
