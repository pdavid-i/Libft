/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:12:13 by pdavid-i          #+#    #+#             */
/*   Updated: 2017/12/16 17:15:32 by pdavid-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *d;

	d = malloc(ft_strlen(str) + 1);
	if (d == NULL)
		return (NULL);
	ft_strcpy(d, str);
	return (d);
}
