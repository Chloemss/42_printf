/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointeur.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:33:13 by cmassavi          #+#    #+#             */
/*   Updated: 2022/01/17 17:22:03 by cmassavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_pointeur(unsigned long int ptr)
{
	int	count;

	ft_putstr("0x");
	count = 2;
	ft_hex(ptr);
	count += ft_hexo(ptr);
	return (count);
}
