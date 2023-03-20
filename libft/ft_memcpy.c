/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:49:28 by cmassavi          #+#    #+#             */
/*   Updated: 2021/12/06 11:49:40 by cmassavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst2;
	const char	*src2;

	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dst2 = (char *)dst;
	src2 = (const char *)src;
	while (n--)
		dst2[n] = src2[n];
	return (dst);
}
