/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:20:23 by cmassavi          #+#    #+#             */
/*   Updated: 2022/01/18 23:04:49 by cmassavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	conversion(va_list ap, const char format)
{
	int	count;

	count = 0;
	if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(ap, int));
	if (format == 'c')
		count += ft_putchar(va_arg(ap, int));
	if (format == 's')
		count += ft_putstr(va_arg(ap, char *));
	if (format == '%')
		count += ft_putstr("%");
	if (format == 'x')
		count += ft_hex(va_arg(ap, unsigned int));
	if (format == 'X')
		count += ft_hex1(va_arg(ap, unsigned int));
	if (format == 'p')
		count += ft_pointeur(va_arg(ap, unsigned long long));
	if (format == 'u')
		count += uns(va_arg(ap, unsigned int));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count += conversion(ap, format[i + 1]);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
