/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:04:45 by cmassavi          #+#    #+#             */
/*   Updated: 2021/12/06 12:05:07 by cmassavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*s3;

	i = 0;
	s3 = (char *)s1;
	n_len = ft_strlen(s2);
	if (n_len == 0 || s1 == s2)
		return (s3);
	while (s3[i] != '\0' && i < len)
	{
		c = 0;
		while (s3[i + c] != '\0' && s2[c] != '\0'
			&& s3[i + c] == s2[c] && i + c < len)
			c++;
		if (c == n_len)
			return (s3 + i);
		i++;
	}
	return (0);
}
