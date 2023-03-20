/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:42:06 by cmassavi          #+#    #+#             */
/*   Updated: 2021/12/06 14:07:11 by cmassavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	declencheur;

	i = 0;
	declencheur = 0;
	while (*str)
	{
		if (*str != c && declencheur == 0)
		{
			declencheur = 1;
			i++;
		}
		else if (*str == c)
			declencheur = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*mot;
	int		i;

	i = 0;
	mot = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		mot[i++] = str[start++];
	mot[i] = '\0';
	return (mot);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		indice;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	i = 0;
	j = 0;
	indice = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && indice < 0)
			indice = i;
		else if ((s[i] == c || i == ft_strlen(s)) && indice >= 0)
		{
			split[j++] = word_dup(s, indice, i);
			indice = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
