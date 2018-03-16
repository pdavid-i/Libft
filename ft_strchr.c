/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 19:48:11 by pdavid-i          #+#    #+#             */
/*   Updated: 2017/12/17 18:54:36 by pdavid-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	while (*string)
	{
		if (*string == c)
			return ((char*)string);
		string++;
	}
	if (*string == c)
		return ((char*)string);
	return (NULL);
}
