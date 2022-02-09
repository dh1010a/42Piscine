/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:20:13 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/09 19:20:15 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	while (*str)
	{
		if(*str == *to_find)
		{
			i = 1;
			while (str[i] == to_find[i] && to_find[i])
				i++;
			if (!to_find[i])
				return (str);
		}
		str++;
	}
	return (0);
}

int	main(void)
{
	{
		char str1[500] = "Hello My name is sryou and sryou is my name.. Nice to meet you ";
		char str2[500] = "sryou";
		char str3[500] = "My name is happy";

		printf("----ex04----\n");
		printf("%s\n%s\n", str1, str2);
		printf("Find str : %s\n", strstr(str1, str2));
		printf("Find str : %s\n", strstr(str1, str3));
		printf("Find str : %s\n", strstr(str2, str3));
		printf("After find\n%s\n%s\n%s\n", str1, str2, str3);	
	}
	printf("\n");
	{
		char str1[500] = "Hello My name is sryou and sryou is my name.. Nice to meet you ";
		char str2[500] = "sryou";
		char str3[500] = "My name is happy";

		printf("test\n");
		printf("%s\n%s\n", str1, str2);
		printf("Find str : %s\n", ft_strstr(str1, str2));
		printf("Find str : %s\n", strstr(str1, str3));
		printf("Find str : %s\n", strstr(str2, str3));
		printf("After find\n%s\n%s\n%s\n", str1, str2, str3);	
	}
}