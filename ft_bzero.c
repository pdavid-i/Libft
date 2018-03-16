/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 15:11:30 by pdavid-i          #+#    #+#             */
/*   Updated: 2017/12/16 15:55:19 by pdavid-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	char	*pointer;
	size_t	i;

	i = 0;
	if (!n)
		return ;
	pointer = s;
	while (i < n)
	{
		*(pointer + i) = 0;
		i++;
	}
}
