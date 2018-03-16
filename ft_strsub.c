/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 19:36:16 by pdavid-i          #+#    #+#             */
/*   Updated: 2017/12/19 14:14:59 by pdavid-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	start2;
	char	*new;

	if (!s)
		return (NULL);
	start2 = start;
	new = (char*)malloc(sizeof(char) * (len + 1));
	if (new)
	{
		i = 0;
		while (i < len)
		{
			new[i] = s[i + start2];
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
