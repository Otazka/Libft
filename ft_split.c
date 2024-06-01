/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 23:06:15 by elsurovt          #+#    #+#             */
/*   Updated: 2024/06/01 11:46:31 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			count++;
			i++;
		}
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static int	ft_wordlen(char const *s, char c, int start)
{
	int		i;
	int		count;

	i = start;
	count = 0;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

static char	*ft_getword(char const *s, char c, int start)
{
	char	*word;
	int		len;
	int		i;
	int		j;

	i = start;
	j = 0;
	len = ft_wordlen(s, c, start);
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (s[i] != c && s[i] != '\0')
		word[j++] = s[i++];
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	j = -1;
	if (!s)
		return (NULL);
	arr = (char **)malloc((sizeof(char *) * (ft_wordcount(s, c) + 1)));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			arr[++j] = ft_getword(s, c, i++);
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	arr[++j] = NULL;
	return (arr);
}
