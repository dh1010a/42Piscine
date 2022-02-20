/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:35:14 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/19 16:35:16 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		++i;
	}
	return (0);
}

int	word_size(char *str, char *set)
{
	int	word_count;

	word_count = 0;
	while (*str)
	{
		while (*str && is_charset(*str, set) == 1)
			str++;
		if (*str && is_charset(*str, set) == 0)
		{
			word_count++;
			while (*str && is_charset(*str, set) == 0)
				str++;
		}
	}
	return (word_count);
}

char	*put_word(char *str, char *charset)
{
	char	*arr_word;
	int		i;
	int		len;

	len = 0;
	while (str[len] && is_charset(str[len], charset) == 0)
		len++;
	arr_word = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	while (str[i] && is_charset(str[i], charset) == 0)
	{
		arr_word[i] = str[i];
		i++;
	}
	arr_word[i] = 0;
	return (arr_word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**arr;

	arr = (char **)malloc(sizeof(char *) * (word_size(str, charset) + 1));
	i = 0;
	while (*str)
	{
		j = -1;
		while (*str && is_charset(*str, charset) == 1)
			str++;
		if (*str && is_charset(*str, charset) == 0)
		{
			arr[i] = put_word(str, charset);
			i++;
			while (*str && is_charset(*str, charset) == 0)
				str++;
		}
	}
	arr[i] = 0;
	return (arr);
}
