/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 17:37:44 by pdavid-i          #+#    #+#             */
/*   Updated: 2017/12/19 14:20:37 by pdavid-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	char			*fresh_string;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	fresh_string = ft_strnew(ft_strlen(s));
	if (fresh_string == NULL)
		return (NULL);
	if (!s || !f)
		return (NULL);
	if (s && f)
		while (s[i] != '\0')
		{
			fresh_string[i] = f(s[i]);
			i++;
		}
	return (fresh_string);
}
