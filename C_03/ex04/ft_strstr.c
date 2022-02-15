/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:20:13 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/10 10:35:01 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (str[i] == to_find[i] && to_find[i] && str[i])
				i++;
			if (to_find[i] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
