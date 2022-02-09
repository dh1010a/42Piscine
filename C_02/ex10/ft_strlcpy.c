/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:15:52 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/09 10:16:20 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int	n;
	unsigned int	i;

	i = -1;
	n = 0;
	while (src[++i])
		n++;
	if (n < size - 1)
	{
		i = -1;
		while (++i < n + 1)
			dest[i] = src[i];
	}
	else if (size > 0)
	{
		i = -1;
		while (++i < size - 1)
			dest[i] = src[i];
		dest[i] = '\0';
	}
	return (n);
}

#include <stdio.h>
int main(void)
{
	char str1[100] = "salut, i am student's of 42 seoul and i study for C";
	char str2[100] = "Well, do you try to pass the exam?";
	char str3[100] = "Hi Guys Welcome to the cluster";
	printf("test\n");
	printf("Before Change\n%s\n%s\n%s\n", str1, str2, str3);
	printf("Copied len : %u\n", ft_strlcpy(str1, str2, (unsigned int)100));
	printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
	printf("Copied len : %u\n", ft_strlcpy(str1, str2, (unsigned int)1));
	printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
	printf("Copied len : %u\n", ft_strlcpy(str1, str3, (unsigned int)10));
	printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
}
