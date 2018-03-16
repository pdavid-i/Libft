/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 20:57:41 by pdavid-i          #+#    #+#             */
/*   Updated: 2017/12/19 16:39:38 by pdavid-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	has_whitespaces(char *s, int *i, size_t *j)
{
	while (ft_is_whitespace(*(s + *i)))
		(*i)++;
	while (ft_is_whitespace(*(s + *j)))
		(*j)--;
	if (*i || *j < ft_strlen(s))
		return (1);
	return (0);
}

char		*ft_strtrim(const char *s)
{
	int		i;
	size_t	j;
	int		k;
	size_t	new_size;
	char	*new_str;

	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	j = ft_strlen(s) - 1;
	if (!has_whitespaces((char*)s, &i, &j) || !ft_strlen(s))
		return ((char*)s);
	new_size = (i == (int)ft_strlen(s)) ? 0 : ft_strlen(s) - (size_t)i - \
				(ft_strlen(s) - j);
	new_str = ft_strnew(new_size + 1);
	if (!new_str)
		return (NULL);
	while (i <= (int)j)
		*(new_str + k++) = *(s + i++);
	return (new_str);
}
