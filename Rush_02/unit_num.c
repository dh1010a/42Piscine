#include <stdio.h>
#include <stdlib.h>

char    *ft_itoa(int n)
{
	int i;
	char *arr;
	int temp;
	int len;

	temp = n;
	len = 0;
	while (temp > 9)
	{
		temp /= 10;
		len++;
	}
	arr = (char *)malloc(sizeof(char) * len + 2);
	i = 0;
	arr[len + 1] = 0;
	while (n > 9)
	{
		arr[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	arr[len] = (n % 10) + '0';
	return (arr);
}

char	*detect_unit(int size)
{
	int		i;
	char	*ss;

	ss = (char *)malloc(size * 3 + 2);
	ss[0] = '1';
	i = 1;
	while (i <= size * 3)
	{
		ss[i] = '0';
		i++;
	}
	return (ss);
}

int	splite_num(int num)
{
	if (num / 100 > 0)
	{
		// dict(ft_itoa(num / 100));
		// dict(ft_itoa(100));
		printf("%s ", ft_itoa(num / 100));
		printf("%s ", ft_itoa(100));
		num = num % 100;
	}
	if (num >= 20)
	{
		// dict(ft_itoa(num / 10 * 10));
		printf("%s ", ft_itoa(num / 10 * 10));
		num = num % 10;
	}
	if (num < 20 && num > 0)
	{
		// dict(ft_itoa(num));
		printf("%s ", ft_itoa(num));
	}
	return (0);
}

int	unit_num(char *num)
{
	int		num_len;
	int		i_num;
	int		i;
	char	*s;

	i = 0;
	num_len = 0;
	
	while (num[num_len])
		num_len++;
	i = 0;
	i_num = 0;
	if (num[0] == '0' && num_len == 2)
	{
		//dict(num);
		return (0);
	}
	while (num[i] != '\0')
	{
		i_num = i_num * 10 + (num[i] - '0');
		i++;
		if ((i - num_len % 3) % 3 == 0)
		{
			// printf("%d", i_num);
			splite_num(i_num);
			if ((num_len - i)/3 != 0 && i_num != 0)
			{
				s = detect_unit((num_len - i)/3);
				printf("|%s|", s);
				// dict(detect_unit((num_len - i) / 3));
			}
			printf("| ");
			i_num = 0;
		}
	}
	return (0);
}

int	main (){

	unit_num("0");
	printf("\n");
	unit_num("123456");
	printf("\n");
	unit_num("12345");
	printf("\n");
	unit_num("42242424242424242");
	printf("\n");
	unit_num("10000000000000");
	return(0);
}
