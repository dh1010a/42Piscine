#include <stdlib.h>
#include <stdio.h>
char	*ft_itoa(int n)
{
	int	i;
	char *arr;
	int	temp;
	int	len;

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

int main(void)
{
	int i = 59;
	printf("%s\n", ft_itoa(i));
	return (0);
}
