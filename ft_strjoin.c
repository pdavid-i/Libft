/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 22:09:22 by pdavid-i          #+#    #+#             */
/*   Updated: 2017/12/19 15:21:41 by pdavid-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*arr;

	if (!s1 || !s2)
		return (NULL);
	arr = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	j = -1;
	i = -1;
	while (s1[++i])
		arr[++j] = s1[i];
	i = -1;
	while (s2[++i])
		arr[++j] = s2[i];
	arr[++j] = '\0';
	return (arr);
}
