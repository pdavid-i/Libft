/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 17:14:10 by pdavid-i          #+#    #+#             */
/*   Updated: 2017/12/16 16:01:45 by pdavid-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_size(int n)
{
	int				l;

	l = 0;
	if (n <= 0)
		l = 1;
	while (n)
	{
		l++;
		n = n / 10;
	}
	return (l);
}

static void			ft_it(char *aux, int nb, int j, int l)
{
	if (nb == -2147483648)
	{
		aux[0] = '-';
		aux[1] = '2';
		ft_it(aux, 147483648, 2, l + 1);
		return ;
	}
	if (nb < 0)
	{
		aux[j++] = '-';
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_it(aux, nb / 10, j + 1, l);
		aux[l - j] = nb % 10 + '0';
	}
	else
		aux[l - j] = nb + '0';
}

char				*ft_itoa(int n)
{
	int				len;
	char			*aux;

	len = ft_size(n);
	aux = (char*)malloc(len + 1);
	if (aux == NULL)
		return (NULL);
	if (n >= 0)
		ft_it(aux, n, 0, len - 1);
	else
		ft_it(aux, n, 0, len);
	aux[len] = '\0';
	return (aux);
}
