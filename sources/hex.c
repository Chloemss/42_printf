/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:48:30 by cmassavi          #+#    #+#             */
/*   Updated: 2022/01/17 17:40:22 by cmassavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_isdigitx(unsigned long long nb)
{
	if (nb <= 9)
		ft_putnbr(nb);
	if (nb == 10)
		ft_putchar('a');
	if (nb == 11)
		ft_putchar('b');
	if (nb == 12)
		ft_putchar('c');
	if (nb == 13)
		ft_putchar('d');
	if (nb == 14)
		ft_putchar('e');
	if (nb == 15)
		ft_putchar('f');
}

int	ft_hexo(unsigned long long nbr)
{
	int					count;
	unsigned long long	i;
	unsigned long long	nbr2;

	count = 0;
	i = 0;
	nbr2 = nbr;
	if (nbr >= 0 && nbr < 16)
	{
		count++;
		return (count);
	}
	while (nbr > 15)
	{
		nbr /= 16;
		i++;
	}
	count += 2;
	i--;
	while (i)
	{
		count++;
		i--;
	}
	return (count);
}

void	hex(unsigned long long i, unsigned long long nbr2)
{
	unsigned long long	i2;

	i2 = i - 1;
	while (i2 != 0)
	{
		nbr2 /= 16;
		i2--;
	}
	i--;
	ft_isdigitx(nbr2 % 16);
}

int	ft_hex(unsigned long long nbr)
{
	unsigned long long	i;
	unsigned long long	nbr2;
	int					count;

	i = 0;
	count = 1;
	nbr2 = nbr;
	if (nbr >= 0 && nbr < 16)
	{
		ft_isdigitx(nbr);
		return (count);
	}
	count = ft_hexo(nbr);
	while (nbr > 15)
	{
		nbr /= 16;
		i++;
	}
	ft_isdigitx(nbr);
	hex(i, nbr2);
	i--;
	while (i)
		hex(i--, nbr2);
	return (count);
}
