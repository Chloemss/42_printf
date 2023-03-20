/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:54:10 by cmassavi          #+#    #+#             */
/*   Updated: 2022/01/31 10:30:25 by cmassavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

int				unscount(int ui);

int				conversion(va_list ap, const char format);

int				ft_hexo1(unsigned long long nbr);

void			hex1(unsigned long long i, unsigned long long nbr2);

int				ft_hex1(unsigned long long nbr);

int				ft_hexo(unsigned long long nbr);

int				divisionn(unsigned int nb);

void			hex(unsigned long long i, unsigned long long nbr2);

int				ft_hex(unsigned long long nbr);

void			ft_isdigit1(unsigned long long nb);

void			ft_isdigitx(unsigned long long nb);

int				uns(int ui);

int				ft_printf(const char *format, ...);

int				ft_pointeur(unsigned long int ptr);

int				ft_putstr(char *str);

int				ft_putchar(char c);

int				ft_putnbr(int nb);

char			*ft_itoa(int n);

char			*unsitoa(unsigned int n);
#endif
