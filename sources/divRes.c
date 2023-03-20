/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divRes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:24:02 by cmassavi          #+#    #+#             */
/*   Updated: 2022/01/17 16:24:27 by cmassavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	divisionn(unsigned int nb)
{
	int	count;

	count = 0;
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	count++;
	return (count);
}
