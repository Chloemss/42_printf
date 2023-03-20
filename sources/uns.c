/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uns.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:31:11 by cmassavi          #+#    #+#             */
/*   Updated: 2022/01/17 16:31:37 by cmassavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	unscount(int ui)
{
	int				count;
	unsigned int	uns;
	char			*str;

	if (ui < 0)
	{
		uns = (unsigned int) ui;
		count = divisionn(uns);
	}
	else
	{
		str = ft_itoa(ui);
		count = ft_strlen(str);
		free(str);
	}
	return (count);
}

int	uns(int ui)
{
	int				count;
	unsigned int	ui1;

	ui1 = (unsigned int) ui;
	if (ui1 < 10)
	{
		ft_putchar(ui1 + '0');
		count = 1;
		return (count);
	}
	ft_putnbr(ui1 / 10);
	ft_putchar((ui1 % 10) + '0');
	count = unscount(ui);
	return (count);
}
