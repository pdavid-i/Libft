/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 17:04:02 by pdavid-i          #+#    #+#             */
/*   Updated: 2017/12/19 16:20:32 by pdavid-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fresh_string;
	int		i;

	if (!s)
		return (NULL);
	fresh_string = ft_strnew(ft_strlen(s));
	i = 0;
	if (!s || !fresh_string)
		return (NULL);
	if (s && f)
		while (*(s + i))
		{
			*(fresh_string + i) = f(i, *(s + i));
			i++;
		}
	return (fresh_string);
}
