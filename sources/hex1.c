/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:25:52 by cmassavi          #+#    #+#             */
/*   Updated: 2022/01/17 17:26:59 by cmassavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_isdigit1(unsigned long long nb)
{
	if (nb <= 9)
		ft_putnbr(nb);
	if (nb == 10)
		ft_putchar('A');
	if (nb == 11)
		ft_putchar('B');
	if (nb == 12)
		ft_putchar('C');
	if (nb == 13)
		ft_putchar('D');
	if (nb == 14)
		ft_putchar('E');
	if (nb == 15)
		ft_putchar('F');
}

int	ft_hexo1(unsigned long long nbr)
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

void	hex1(unsigned long long i, unsigned long long nbr2)
{
	unsigned long long	i2;

	i2 = i - 1;
	while (i2 != 0)
	{
		nbr2 /= 16;
		i2--;
	}
	i--;
	ft_isdigit1(nbr2 % 16);
}

int	ft_hex1(unsigned long long nbr)
{
	int					i;
	unsigned long long	nbr2;
	int					count;

	count = 1;
	i = 0;
	nbr2 = nbr;
	if (nbr >= 0 && nbr < 16)
	{
		ft_isdigit1(nbr);
		return (count);
	}
	count = ft_hexo1(nbr);
	while (nbr > 15)
	{
		nbr /= 16;
		i++;
	}
	ft_isdigit1(nbr);
	hex1(i, nbr2);
	i--;
	while (i)
		hex1(i--, nbr2);
	return (count);
}
